from fastapi import FastAPI, File, UploadFile
from starlette.routing import Host
import uvicorn

app = FastAPI()

@app.post("/extract")
async def uploadFile(file: UploadFile = File(...)):
  fname = file.filename
  data = await file.read()

  f = open(fname, "wb")
  f.write(data)
  f.close()

  return {"message": "success"}

@app.get("/")
async def halo():
  return "Halo, dunia"

@app.get("/baca/{name}")
async def bacaFile(name: str):
  f = open(name, 'rb')

  return f.read()

if __name__ == "__main__":
  uvicorn.run(app, host="192.168.100.120", port=8080)