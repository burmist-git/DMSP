Int_t flat_lambda(){

  TRandom3 *rnd = new TRandom3(11231231);

  TH1D *h1 = new TH1D("h1","h1",300,0,10);

  for(Int_t i = 0;i<100000;i++){
    h1->Fill(1239.8/rnd->Uniform(450,950));
  }
  
  h1->Draw();
  
  return 0;
}
