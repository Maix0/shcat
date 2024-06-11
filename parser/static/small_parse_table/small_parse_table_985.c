/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_985.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4925(t_small_parse_table_array *v)
{
	v->a[98500] = 1;
	v->a[98501] = sym_regex;
	v->a[98502] = state(2104);
	v->a[98503] = 2;
	v->a[98504] = sym_string;
	v->a[98505] = aux_sym_expansion_regex_repeat1;
	v->a[98506] = 3;
	v->a[98507] = actions(3);
	v->a[98508] = 1;
	v->a[98509] = sym_comment;
	v->a[98510] = actions(1177);
	v->a[98511] = 1;
	v->a[98512] = sym__concat;
	v->a[98513] = actions(1179);
	v->a[98514] = 7;
	v->a[98515] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98516] = anon_sym_DOLLAR;
	v->a[98517] = anon_sym_DQUOTE;
	v->a[98518] = sym_string_content;
	v->a[98519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4926(v);
}

void	small_parse_table_4926(t_small_parse_table_array *v)
{
	v->a[98520] = anon_sym_DOLLAR_LPAREN;
	v->a[98521] = anon_sym_BQUOTE;
	v->a[98522] = 3;
	v->a[98523] = actions(3);
	v->a[98524] = 1;
	v->a[98525] = sym_comment;
	v->a[98526] = actions(1159);
	v->a[98527] = 1;
	v->a[98528] = sym__concat;
	v->a[98529] = actions(1157);
	v->a[98530] = 7;
	v->a[98531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98532] = anon_sym_DOLLAR;
	v->a[98533] = anon_sym_DQUOTE;
	v->a[98534] = sym_string_content;
	v->a[98535] = anon_sym_DOLLAR_LBRACE;
	v->a[98536] = anon_sym_DOLLAR_LPAREN;
	v->a[98537] = anon_sym_BQUOTE;
	v->a[98538] = 3;
	v->a[98539] = actions(3);
	small_parse_table_4927(v);
}

void	small_parse_table_4927(t_small_parse_table_array *v)
{
	v->a[98540] = 1;
	v->a[98541] = sym_comment;
	v->a[98542] = actions(4376);
	v->a[98543] = 1;
	v->a[98544] = sym__concat;
	v->a[98545] = actions(4374);
	v->a[98546] = 7;
	v->a[98547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98548] = anon_sym_DOLLAR;
	v->a[98549] = anon_sym_DQUOTE;
	v->a[98550] = sym_string_content;
	v->a[98551] = anon_sym_DOLLAR_LBRACE;
	v->a[98552] = anon_sym_DOLLAR_LPAREN;
	v->a[98553] = anon_sym_BQUOTE;
	v->a[98554] = 6;
	v->a[98555] = actions(3);
	v->a[98556] = 1;
	v->a[98557] = sym_comment;
	v->a[98558] = actions(1004);
	v->a[98559] = 1;
	small_parse_table_4928(v);
}

void	small_parse_table_4928(t_small_parse_table_array *v)
{
	v->a[98560] = aux_sym_heredoc_redirect_token1;
	v->a[98561] = actions(4378);
	v->a[98562] = 1;
	v->a[98563] = aux_sym_concatenation_token1;
	v->a[98564] = actions(4381);
	v->a[98565] = 1;
	v->a[98566] = sym__concat;
	v->a[98567] = state(2108);
	v->a[98568] = 1;
	v->a[98569] = aux_sym_concatenation_repeat1;
	v->a[98570] = actions(999);
	v->a[98571] = 4;
	v->a[98572] = anon_sym_in;
	v->a[98573] = anon_sym_SEMI_SEMI;
	v->a[98574] = anon_sym_AMP;
	v->a[98575] = anon_sym_SEMI;
	v->a[98576] = 3;
	v->a[98577] = actions(3);
	v->a[98578] = 1;
	v->a[98579] = sym_comment;
	small_parse_table_4929(v);
}

void	small_parse_table_4929(t_small_parse_table_array *v)
{
	v->a[98580] = actions(1147);
	v->a[98581] = 1;
	v->a[98582] = sym__concat;
	v->a[98583] = actions(1149);
	v->a[98584] = 7;
	v->a[98585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98586] = anon_sym_DOLLAR;
	v->a[98587] = anon_sym_DQUOTE;
	v->a[98588] = sym_string_content;
	v->a[98589] = anon_sym_DOLLAR_LBRACE;
	v->a[98590] = anon_sym_DOLLAR_LPAREN;
	v->a[98591] = anon_sym_BQUOTE;
	v->a[98592] = 8;
	v->a[98593] = actions(3);
	v->a[98594] = 1;
	v->a[98595] = sym_comment;
	v->a[98596] = actions(4384);
	v->a[98597] = 1;
	v->a[98598] = anon_sym_RPAREN;
	v->a[98599] = actions(4386);
	small_parse_table_4930(v);
}

/* EOF small_parse_table_985.c */
