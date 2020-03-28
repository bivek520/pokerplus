#include "mainwin.h"
std::string big(int card)
{
std::string sCard = "LargeCards/" + std::to_string(card) + ".jpg";
return sCard;
}
std::string sml(int card)
{
std::string sCard = "SmallCards/" + std::to_string(card) + ".jpg";
return sCard;
}
Mainwin::Mainwin() : exchange("Exchange"), fold("          F O L D          "), call("         C A L L          "), raise("           R A I S E          ")
{
	
	set_title(APP_TITLE);    //Application Title
	set_default_size(800, 600);   //default size of application window

	Gtk::Box *vbox = Gtk::manage(new Gtk::VBox);
        add(*vbox);

	//hbox.pack_start(vbox);
	//action1.set_text("Calls $175");
	//vbox.pack_start(hbox);
	//vbox.pack_start(action1);

	p1.set_text("player 1");
	p2.set_text("player 2");
	p3.set_text("player 3");
	p4.set_text("player 4");
	p5.set_text("player 5");

	add(hbox);
	vbox->pack_start(cvbox, Gtk::PACK_SHRINK, 10);
	cvbox.pack_start(hbox);

	hbox.pack_start(p1);
	hbox.pack_start(p2);
	hbox.pack_start(p3);
	hbox.pack_start(p4);
	hbox.pack_start(p5);

	//vbox->pack_start(*msg, Gtk::PACK_SHRINK, 0);
	p1.override_background_color(Gdk::RGBA{"yellow"});
	p2.override_background_color(Gdk::RGBA{"blue"});
	p3.override_background_color(Gdk::RGBA{"magenta"});
	p4.override_background_color(Gdk::RGBA{"cyan"});
	p5.override_background_color(Gdk::RGBA{"orange"});

	action1.set_text("\nCalled $5");
	action2.set_text("\nP1 Action");
	action3.set_text("\nP2 Action");
	action4.set_text("\nP3 Action");
	action5.set_text("\nP4 Action");

	cvbox.set_border_width(10);

	cvbox.pack_start(actionHbox);
	actionHbox.pack_start(action1);
	actionHbox.pack_start(action2);
	actionHbox.pack_start(action3);
	actionHbox.pack_start(action4);
	actionHbox.pack_start(action5);

	balance1.set_text("\n$175");
	balance2.set_text("\n$200");
	balance3.set_text("\n$199");
	balance4.set_text("\n$200");
	balance5.set_text("\nBalance");

	//add(balanceHbox);
	cvbox.pack_start(balanceHbox);
	balanceHbox.pack_start(balance1, Gtk::PACK_END, 0);
	balanceHbox.pack_start(balance2, Gtk::PACK_END, 0);
	balanceHbox.pack_start(balance3, Gtk::PACK_END, 0);
	balanceHbox.pack_start(balance4,Gtk::PACK_END, 0);
	balanceHbox.pack_start(balance5,Gtk::PACK_END, 0);
	
	image11.set_text(" | ");
	image12.set_text(" | ");
	image13.set_text(" | ");
	image14.set_text(" | ");


//	cvbox.pack_start(publicCardHbox);
//	publicCardHbox.pack_start(image11, Gtk::PACK_END, 0);
//	publicCardHbox.pack_start(image12, Gtk::PACK_END, 0);
//	publicCardHbox.pack_start(image13, Gtk::PACK_END, 0);
//	publicCardHbox.pack_start(image14,Gtk::PACK_END, 0);
//	publicCardHbox.pack_start(image15,Gtk::PACK_END, 0);

	Gtk::Image *h1 =Gtk::manage(new Gtk::Image{sml(21)});
	Gtk::Image *h2 =Gtk::manage(new Gtk::Image{sml(121)});
	Gtk::Image *h3 =Gtk::manage(new Gtk::Image{sml(113)});
	Gtk::Image *h4 =Gtk::manage(new Gtk::Image{sml(122)});
	Gtk::Image *h5 =Gtk::manage(new Gtk::Image{sml(123)});

	Gtk::Image *h6 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h7 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h8 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h9 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h10 =Gtk::manage(new Gtk::Image{"back.jpg"});

	Gtk::Image *h11 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h12 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h13 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h14 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h15 =Gtk::manage(new Gtk::Image{"back.jpg"});

	Gtk::Image *h16 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h17 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h18 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h19 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h20 =Gtk::manage(new Gtk::Image{"back.jpg"});

	Gtk::Image *h21 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h22 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h23 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h24 =Gtk::manage(new Gtk::Image{"back.jpg"});
	Gtk::Image *h25 =Gtk::manage(new Gtk::Image{"back.jpg"});




	cvbox.pack_start(publicCardHbox);
	cvbox.pack_start(sep1);
    	publicCardHbox.pack_start(*h1); 
    	publicCardHbox.pack_start(*h2); 
    	publicCardHbox.pack_start(*h3); 
    	publicCardHbox.pack_start(*h4); 
    	publicCardHbox.pack_start(*h5); 
	publicCardHbox.pack_start(image11);
    	publicCardHbox.pack_start(*h6); 
    	publicCardHbox.pack_start(*h7); 
    	publicCardHbox.pack_start(*h8); 
    	publicCardHbox.pack_start(*h9);
    	publicCardHbox.pack_start(*h10); 
	publicCardHbox.pack_start(image12);
    	publicCardHbox.pack_start(*h11);
    	publicCardHbox.pack_start(*h12); 
    	publicCardHbox.pack_start(*h13); 
    	publicCardHbox.pack_start(*h14); 
    	publicCardHbox.pack_start(*h15); 
	publicCardHbox.pack_start(image13);
    	publicCardHbox.pack_start(*h16); 
    	publicCardHbox.pack_start(*h17); 
    	publicCardHbox.pack_start(*h18); 
    	publicCardHbox.pack_start(*h19); 
    	publicCardHbox.pack_start(*h20); 
	publicCardHbox.pack_start(image14);
    	publicCardHbox.pack_start(*h21); 
    	publicCardHbox.pack_start(*h22); 
	publicCardHbox.pack_start(*h23); 
    	publicCardHbox.pack_start(*h24); 
    	publicCardHbox.pack_start(*h25); 

	Gtk::Image *indicator =Gtk::manage(new Gtk::Image{"indicator.png"});
	cvbox.pack_start(indicatorHbox);
	indicatorHbox.pack_start(*indicator);

	pot.set_text("\nPOT: $200\n");
	//pot.override_foreground_color(Gdk::RGBA{"gold"});
	cvbox.pack_start(potHbox);
	potHbox.pack_start(pot, Gtk::PACK_END, 0);
	Gtk::Image *bh1 =Gtk::manage(new Gtk::Image{big(21)});
	Gtk::Image *bh2 =Gtk::manage(new Gtk::Image{big(121)});
	Gtk::Image *bh3 =Gtk::manage(new Gtk::Image{big(113)});
	Gtk::Image *bh4 =Gtk::manage(new Gtk::Image{big(122)});
	Gtk::Image *bh5 =Gtk::manage(new Gtk::Image{big(123)});


	//image21.override_background_color(Gdk::RGBA{"black"});
	cvbox.pack_start(sep2);
	cvbox.pack_start(privateCardHbox);
	//image21.set_text(" \n");
	//privateCardHbox.pack_start(image21);
    	privateCardHbox.pack_start(*bh1); 
    	privateCardHbox.pack_start(*bh2); 
    	privateCardHbox.pack_start(*bh3); 
    	privateCardHbox.pack_start(*bh4); 
    	privateCardHbox.pack_start(*bh5); 

	cvbox.pack_start(cardSelectionHbox);    
	cardSelectionHbox.pack_start(RB1,Gtk::PACK_END, 0);
	cardSelectionHbox.pack_start(RB2,Gtk::PACK_END, 0);
	cardSelectionHbox.pack_start(RB3,Gtk::PACK_END, 0);
	cardSelectionHbox.pack_start(RB4,Gtk::PACK_END, 0);
	cardSelectionHbox.pack_start(RB5,Gtk::PACK_END, 0);

	cvbox.pack_start(exchangeHbox);    
	exchangeHbox.pack_start(exchange ,Gtk::PACK_END, 0);

 	cvbox.pack_start(sep3);

	image21.set_text(" \n");
	//playHbox.pack_start(image21);

	HScale.set_digits(1);
	HScale.set_value_pos(Gtk::POS_TOP);
 	HScale.set_draw_value();

	//cvbox.pack_start(image21);  
	vbox->pack_start(playHbox);  
	playHbox.pack_start(fold ,Gtk::PACK_END, 0);
	playHbox.pack_start(call ,Gtk::PACK_END, 0);
	playHbox.pack_start(raise ,Gtk::PACK_END, 0);
  	fold.signal_clicked().connect([this] {this->on_fold_click();});
  	fold.show();
  	call.signal_clicked().connect([this] {this->on_call_click();});
  	call.show();
  	raise.signal_clicked().connect([this] {this->on_raise_click();});
  	raise.show();
	//playHbox.pack_start(sep4);
	playHbox.pack_start(HScale);
	HScale.set_range(5, 175);
	HScale.set_increments(1.0, 1.0);
	vbox->pack_start(image21);  







	//RB1.set_active();
	//RB2.set_active();
	//nhbox.show_all();
	//hbox.show_all();
	add(hbox);

	vbox->show_all();
	
	show_all_children();


}

Mainwin::~Mainwin() { }

void Mainwin::on_fold_click() {
action1.set_text("\nFolded");

std::cout << "Player Folded!" << std::endl;
}
void Mainwin::on_call_click() {
action1.set_text("\nCalled $5");

std::cout << "Player Called $5!" << std::endl;
}
void Mainwin::on_raise_click() {
int sp = HScale.get_value();
action1.set_text("\nRaised $" + std::to_string(sp));
std::cout << "Player Raised $" + std::to_string(sp) + "!"<< std::endl;
}




