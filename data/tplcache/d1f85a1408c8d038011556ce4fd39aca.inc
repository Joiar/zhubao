<li class="dropdown margin-left-40">
						<a
							class="active link "
							data-toggle="dropdown"
							data-hover="dropdown"
							href="list.php?tid={dede:field name='id'/}"
							aria-expanded="false"
							title="{dede:field name='typename'/}"
						>{dede:field name='typename'/} <span class="caret"></span></a>
						<ul class="dropdown-menu dropdown-menu-right animate">
							{dede:channel type='son' row=''}
							<li><a href="list.php?tid=[field:id/]" class=""  title="[field:typename/]">[field:typename/]</a></li>
							{/dede:channel}
						</ul>
					</li>