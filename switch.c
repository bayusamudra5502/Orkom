int cabang(int x){
  switch(x){
    case 10:
      x += 5;
      break;
    case 20:
      x -= 12;
      break;
    case 40:
      x /= 3;
    case 50:
      x++;
      break;
    default:
      x += 10;
  }

  return x;
}
