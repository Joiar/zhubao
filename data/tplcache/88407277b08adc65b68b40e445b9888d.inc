<li class="">
							<div class="media media-lg">
								<div class="media-left">
									<a href="view.php?aid=[field:id]" title="[field:title/]" target='_self'>
										<img class="media-object" src="[field:picname/]" style='height:150px;' alt="[field:title/]">
									</a>
								</div>
								<div class="media-body">
									<h4 class="media-heading">
										<a href="view.php?aid=[field:id]" title="[field:title/]" target='_self'>
											[field:title/]
										</a>
									</h4>
									<p class="des">[field:description function="cn_substr(@me,50)"/]... </p>
									<p class="info">
										<span>[field:pubdate function="GetDateTimeMK(@me)" /]</span>
										<span>[field:writer/]</span>
										<span><i class="icon wb-eye margin-right-5" aria-hidden="true"></i>[field:click/]   </span>
									</p>
								</div>
							</div>
						</li>