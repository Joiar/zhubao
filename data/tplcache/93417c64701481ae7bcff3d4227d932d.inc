<li class="invisible" data-plugin="appear" data-animate="slide-bottom" data-repeat="false">
					<div class="media media-lg">
						<div class="media-left">
							<a href="/list.php?aid=[field:id]" title="[field:title/]" target='_self'>
								<img class="media-object" src="[field:picname/]" style='height:80px;' alt="[field:title/]">
							</a>
						</div>
						<div class="media-body">
							<h4 class="media-heading">
								<a href="/list.php?aid=[field:id]" title="[field:title/]" target='_self'>
									[field:title/]
								</a>
							</h4>
								<p class="des">[field:description function="cn_substr(@me,500)"/]... </p>
								<p class="info">
									<span>[field:pubdate function="MyDate('m-d',@me)"/]</span>
									<span class="margin-left-10">admin</span>
									<span class="margin-left-10"><i class="icon wb-eye margin-right-5" aria-hidden="true"></i>[field:click/] </span>
								</p>
						</div>
					</div>
				</li>