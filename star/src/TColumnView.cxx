// @(#)root/star:$Name:  $:$Id: TColumnView.cxx,v 1.1.1.1 2000/05/16 17:00:48 rdm Exp $
// Author: Valery Fine(fine@bnl.gov)   13/03/2000

//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  TColumnView                                                         //
//                                                                      //
//  It is a helper class to present TTable object view TBrowser         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
 

#include "TColumnView.h"
#include "TVirtualPad.h"

ClassImp(TColumnView)

//______________________________________________________________________________
TColumnView::TColumnView(const char *colName,TTable *table):TChair(table){
  SetName(colName);
}

//______________________________________________________________________________
TColumnView::~TColumnView(){
}

//______________________________________________________________________________
void TColumnView::Browse(TBrowser *b)
{
  Draw(GetName(),"");
  gPad->Modified();
  gPad->Update();
}

//______________________________________________________________________________
TH1 *TColumnView::Histogram(const char *selection){
  TH1 *h = Draw(GetName(),selection);
  gPad->Modified();
  gPad->Update();
  return h;
}

//______________________________________________________________________________
Bool_t  TColumnView::IsFolder(){ return kFALSE;}

