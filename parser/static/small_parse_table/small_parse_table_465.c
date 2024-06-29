/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_465.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2325(t_small_parse_table_array *v)
{
	v->a[46500] = sym_word;
	v->a[46501] = 7;
	v->a[46502] = actions(3);
	v->a[46503] = 1;
	v->a[46504] = sym_comment;
	v->a[46505] = actions(1536);
	v->a[46506] = 1;
	v->a[46507] = sym_file_descriptor;
	v->a[46508] = actions(1539);
	v->a[46509] = 1;
	v->a[46510] = sym_variable_name;
	v->a[46511] = actions(1584);
	v->a[46512] = 1;
	v->a[46513] = anon_sym_RPAREN;
	v->a[46514] = actions(1526);
	v->a[46515] = 9;
	v->a[46516] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46517] = anon_sym_DOLLAR;
	v->a[46518] = anon_sym_DQUOTE;
	v->a[46519] = sym_raw_string;
	small_parse_table_2326(v);
}

void	small_parse_table_2326(t_small_parse_table_array *v)
{
	v->a[46520] = sym_number;
	v->a[46521] = anon_sym_DOLLAR_LBRACE;
	v->a[46522] = anon_sym_DOLLAR_LPAREN;
	v->a[46523] = anon_sym_BQUOTE;
	v->a[46524] = sym_word;
	v->a[46525] = actions(1528);
	v->a[46526] = 9;
	v->a[46527] = anon_sym_PIPE;
	v->a[46528] = anon_sym_SEMI_SEMI;
	v->a[46529] = anon_sym_AMP_AMP;
	v->a[46530] = anon_sym_PIPE_PIPE;
	v->a[46531] = anon_sym_LT_LT;
	v->a[46532] = anon_sym_LT_LT_DASH;
	v->a[46533] = aux_sym_heredoc_redirect_token1;
	v->a[46534] = anon_sym_AMP;
	v->a[46535] = anon_sym_SEMI;
	v->a[46536] = actions(1533);
	v->a[46537] = 10;
	v->a[46538] = anon_sym_LT;
	v->a[46539] = anon_sym_GT;
	small_parse_table_2327(v);
}

void	small_parse_table_2327(t_small_parse_table_array *v)
{
	v->a[46540] = anon_sym_GT_GT;
	v->a[46541] = anon_sym_AMP_GT;
	v->a[46542] = anon_sym_AMP_GT_GT;
	v->a[46543] = anon_sym_LT_AMP;
	v->a[46544] = anon_sym_GT_AMP;
	v->a[46545] = anon_sym_GT_PIPE;
	v->a[46546] = anon_sym_LT_AMP_DASH;
	v->a[46547] = anon_sym_GT_AMP_DASH;
	v->a[46548] = 12;
	v->a[46549] = actions(3);
	v->a[46550] = 1;
	v->a[46551] = sym_comment;
	v->a[46552] = actions(760);
	v->a[46553] = 1;
	v->a[46554] = sym_file_descriptor;
	v->a[46555] = actions(1566);
	v->a[46556] = 1;
	v->a[46557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46558] = actions(1568);
	v->a[46559] = 1;
	small_parse_table_2328(v);
}

void	small_parse_table_2328(t_small_parse_table_array *v)
{
	v->a[46560] = anon_sym_DOLLAR;
	v->a[46561] = actions(1570);
	v->a[46562] = 1;
	v->a[46563] = anon_sym_DQUOTE;
	v->a[46564] = actions(1572);
	v->a[46565] = 1;
	v->a[46566] = anon_sym_DOLLAR_LBRACE;
	v->a[46567] = actions(1574);
	v->a[46568] = 1;
	v->a[46569] = anon_sym_DOLLAR_LPAREN;
	v->a[46570] = actions(1576);
	v->a[46571] = 1;
	v->a[46572] = anon_sym_BQUOTE;
	v->a[46573] = state(1605);
	v->a[46574] = 1;
	v->a[46575] = sym_concatenation;
	v->a[46576] = actions(1587);
	v->a[46577] = 3;
	v->a[46578] = sym_raw_string;
	v->a[46579] = sym_number;
	small_parse_table_2329(v);
}

void	small_parse_table_2329(t_small_parse_table_array *v)
{
	v->a[46580] = sym_word;
	v->a[46581] = state(1417);
	v->a[46582] = 5;
	v->a[46583] = sym_arithmetic_expansion;
	v->a[46584] = sym_string;
	v->a[46585] = sym_simple_expansion;
	v->a[46586] = sym_expansion;
	v->a[46587] = sym_command_substitution;
	v->a[46588] = actions(758);
	v->a[46589] = 15;
	v->a[46590] = anon_sym_PIPE;
	v->a[46591] = anon_sym_AMP_AMP;
	v->a[46592] = anon_sym_PIPE_PIPE;
	v->a[46593] = anon_sym_LT;
	v->a[46594] = anon_sym_GT;
	v->a[46595] = anon_sym_GT_GT;
	v->a[46596] = anon_sym_AMP_GT;
	v->a[46597] = anon_sym_AMP_GT_GT;
	v->a[46598] = anon_sym_LT_AMP;
	v->a[46599] = anon_sym_GT_AMP;
	small_parse_table_2330(v);
}

/* EOF small_parse_table_465.c */
