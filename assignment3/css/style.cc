body {
  font-size: 16px;
  color: #fff;
  background-color: #61122f;
  font-family: 'Oxygen', sans-serif;
}

/** HEADER **/
#header-nav {
  background-color: #f6b319;
  border-radius: 0;
  border: 0;
   border: 1px solid #61122f;
}

#logo-img {
  background: url('../images/restaurant-logo_large.png') no-repeat;
  width: 150px;
  height: 150px;
  margin: 10px 15px 10px 0;
}

.navbar-brand {
  padding-top: 25px;
}

.navbar-brand h1 { /* Restaurant name */
  font-family: 'Lora', serif;
  color: #557c3e;
  font-size: 1.5em;
  text-transform: uppercase;
  font-weight: bold;
  text-shadow: 1px 1px 1px #222;
  margin-top: 0;
  margin-bottom: 0;
  line-height: .75;
}
.navbar-brand a:hover, .navbar-brand a:focus {
  text-decoration: none;
}
.navbar-brand p { /* Kosher cert */
  color: #000;
  text-transform: uppercase;
  font-size: .7em;
  margin-top: 15px;
}
.navbar-brand p span { /* Star-K */
  vertical-align: middle;
}

#nav-list {
  margin-top: 10px;
}
#nav-list a {
  color: #951C49;
  text-align: center;
}
#nav-list a:hover {
  background: #E7E7E7;
}
#nav-list a span {
  font-size: 1.8em;
}

#phone {
  margin-top: 5px;
}
#phone a { /* Phone number */
  text-align: right;
  padding-bottom: 0;
}
#phone div { /* We Deliver */
  color: #557c3e;
  text-align: right;
  padding-right: 15px;
}

.navbar-header button.navbar-toggle, .navbar-header .icon-bar {
  border: 1px solid #61122f;
}
.navbar-header button.navbar-toggle {
  clear: both;
  margin-top: -30px;
}
/* END HEADER */

/* HOME PAGE */
.container .jumbotron {
  box-shadow: 0 0 50px #3F0C1F;
  border: 2px solid #3F0C1F;
}

#menu-tile, #specials-tile, #map-tile {
  height: 250px;
  width: 100%;
  margin-bottom: 15px;
  position: relative;
  border: 2px solid #3F0C1F;
  overflow: hidden;
}
#menu-tile:hover, #specials-tile:hover, #map-tile:hover {
  box-shadow: 0 1px 5px 1px #cccccc;
}

#menu-tile {
  background: url('../images/menu-tile.jpg') no-repeat;
  background-position: center;
}
#specials-tile {
  background: url('../images/specials-tile.jpg') no-repeat;
  background-position: center;
}

#menu-tile span, #specials-tile span, #map-tile span {
  position: absolute;
  bottom: 0;
  right: 0;
  width: 100%;
  text-align: center;
  font-size: 1.6em;
  text-transform: uppercase;
  background-color: #000;
  color: #fff;
  opacity: .8;
}

/* END HOME PAGE */

/********** Large devices only **********/
@media (min-width: 1200px) {
  .container .jumbotron {
    background: url('../images/jumbotron_1200.jpg') no-repeat;
    height: 675px;
  }
}

/********** Medium devices only **********/
@media (min-width: 992px) and (max-width: 1199px) {
  /* Header */
  #logo-img {
    background: url('../images/restaurant-logo_medium.png') no-repeat;
    width: 100px;
    height: 100px;
    margin: 5px 5px 5px 0;
  }
  /* End Header */

  /* Home Page */
  .container .jumbotron {
    background: url('../images/jumbotron_992.jpg') no-repeat;
    height: 558px;
  }
  /* End Home Page */
}

/********** Small devices only **********/
@media (min-width: 768px) and (max-width: 991px) {
  /* Home Page */
  .container .jumbotron {
    background: url('../images/jumbotron_768.jpg') no-repeat;
    height: 432px;
  }
  /* End Home Page */

}

/********** Extra small devices only **********/
@media (max-width: 767px) {
  /* Header */
  .navbar-brand {
    padding-top: 10px;
    height: 80px;
  }
  .navbar-brand h1 { /* Restaurant name */
    padding-top: 10px;
    font-size: 5vw; /* 1vw = 1% of viewport width */
  }
  .navbar-brand p { /* Kosher cert */
    font-size: .6em;
    margin-top: 12px;
  }
  .navbar-brand p img { /* Star-K */
    height: 20px;
  }

  #collapsable-nav a { /* Collapsed nav menu text */
    font-size: 1.2em;
  }
  #collapsable-nav a span { /* Collapsed nav menu glyph */
    font-size: 1em;
    margin-right: 5px;
  }

  #call-btn > a {
    font-size: 1.5em;
    display: block;
    margin: 0 20px;
    padding: 10px;
    border: 2px solid #fff;
    background-color: #f6b319;
    color: #951c49;
  }
  #xs-deliver {
    margin-top: 5px;
    font-size: .7em;
    letter-spacing: .1em;
    text-transform: uppercase;
  }
  /* End Header */

  /* Home Page */
  .container .jumbotron {
    margin-top: 30px;
    padding: 0;
  }

  #menu-tile, #specials-tile {
    width: 360px;
    margin: 0 auto 15px;
  }

}


/********** Super extra small devices Only :-) (e.g., iPhone 4) **********/
@media (max-width: 479px) {
  /* Header */
  .navbar-brand h1 { /* Restaurant name */
    padding-top: 5px;
    font-size: 6vw;
  }
  /* End Header */
  
  /* Home page */
  #menu-tile, #specials-tile {
    width: 280px;
    margin: 0 auto 15px;
  }
}
