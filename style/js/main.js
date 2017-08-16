$(window).load(function(){
	//全部分类
	$('.navHeader .category span').click(function(){
		$('.navHeader .category ul').stop(false,true).slideToggle();
	});
	
	//在线留言之产品展示
	var winW=$(".message .picShow").width();
	var liL=$(".message .picShow ol li").length;
	$(".message .picShow ul li").eq(0).css("left","0px").siblings().css("left",winW+"px");
	var index=0;
	var timer=null;
	var bool=true;
	$(".message .picShow ol li").eq(0).addClass("on").siblings().removeClass("on");

    $(".message .picShow .next").click(function () {
    	if(bool){
    		bool=false;
	    	var prevB=$(".message .picShow ol li.on").index();
	    	index++;
	    	if(index>=liL){index=0;}
	    	lun(".message .picShow ul li",".message .picShow ol li",prevB,index,winW,300,1);
	    }
    })

    $(".message .picShow .prev").click(function () {
    	if(bool){
    		bool=false;
    		var prevB=$(".message .picShow ol li.on").index();
	    	index--;
	    	if(index<0){index=liL-1;}
	    	lun(".message .picShow ul li",".message .picShow ol li",prevB,index,winW,300,0);
    	}
    })
    $(".message .picShow ol li").click(function () {
    	var prevB=$(".message .picShow ol li.on").index();
    	var liIndex=$(this).index();
    	$(this).addClass("on").siblings().removeClass("on");
    	if(parseInt(liIndex)-parseInt(prevB)>0){
    	lun(".message .picShow ul li",".message .picShow ol li",prevB,liIndex,winW,300,1);
    	}
    	else{
    		lun(".message .picShow ul li",".message .picShow ol li",prevB,liIndex,winW,300,0);
    	}
    	index=liIndex;
    })
    move();
    function move(){
    	timer=setInterval(function () {
    		var prevB=$(".message .picShow ol li.on").index();
    		index++;
    		if(index>=liL){index=0;}
    		lun(".message .picShow ul li",".message .picShow ol li",prevB,index,winW,300,1);
    	},2000);
    }
    $(".message .picShow").hover(function () {
     	clearInterval(timer);
    },function () {
     	move();
    });
    
    function lun (bdname,liname,prevB,curindex,winW,speed,shu) {
    	$(liname).eq(curindex).addClass("on").siblings().removeClass("on");
    	if(shu){
    		$(bdname).eq(prevB).stop(false,true).animate({left:'-' + winW + 'px'},speed);
    	$(bdname).eq(curindex).css("left",winW+"px").stop(false,true).animate({left:"0px"},speed,function () {
    		bool=true;
    	});
    	}else{
    		$(bdname).eq(prevB).stop(false,true).animate({left:winW + 'px'},speed);
    	$(bdname).eq(curindex).css("left",'-'+winW+"px").stop(false,true).animate({left:"0px"},speed,function () {
    		bool=true;
    	});
    	}    	
    };
	
    $('.toolbar_back_top').click(function(){
        $('body,html').animate({scrollTop:0},600)
    })
});


