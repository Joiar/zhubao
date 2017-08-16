<li class="dropdown margin-left-40">
						<a
							href="list.php?tid={dede:field name='id'/}"
						>{dede:field name='typename'/} <span class="caret"></span></a>
						<ul class="dropdown-menu dropdown-menu-right animate">
							{dede:channel type='son' row=''}
							<li><a href="list.php?tid=[field:id/]" class=""  title="[field:typename/]">[field:typename/]</a></li>
							{/dede:channel}
						</ul>
					</li>