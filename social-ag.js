(function ($) {

Drupal.behaviors.socialag = {
  attach: function(context) {
  	$(".view-id-social .views-field-body").each(function(){
		var str = $(this).text();
		var exp = "/(\b(https?|ftp|file):\/\/[-A-Z0-9+&@#\/%?=~_|!:,.;]*[-A-Z0-9+&@#\/%=~_|])/ig";
		str.replace(exp,"<a href='$1'>$1</a>");

		str = str.split(" ");
		for(var x = 0; x < str.length; x++){
			var path = str[x];
			path = path.substring(1);
			if(str[x].charAt(0) == "#"){
				str[x] = "<a href='https://twitter.com/search?q=" + path + "&src=hash'>" + str[x] + "</a>";
			}
			if(str[x].charAt(0) == "@"){
				str[x] = "<a href='https://twitter.com/" + path + "'>" + str[x] + "</a>";
			}
		}

		$(this).html(str.join(" "));
	});

  }
};
})(jQuery);
