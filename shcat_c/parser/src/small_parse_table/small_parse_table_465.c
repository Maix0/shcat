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
	v->a[46500] = anon_sym_AMP_AMP;
	v->a[46501] = anon_sym_PIPE;
	v->a[46502] = anon_sym_AMP;
	v->a[46503] = anon_sym_EQ_EQ;
	v->a[46504] = anon_sym_LT;
	v->a[46505] = anon_sym_GT;
	v->a[46506] = anon_sym_LT_LT;
	v->a[46507] = anon_sym_GT_GT;
	v->a[46508] = anon_sym_RPAREN;
	v->a[46509] = anon_sym_SEMI_SEMI;
	v->a[46510] = anon_sym_PIPE_AMP;
	v->a[46511] = anon_sym_EQ_TILDE;
	v->a[46512] = anon_sym_AMP_GT;
	v->a[46513] = anon_sym_AMP_GT_GT;
	v->a[46514] = anon_sym_LT_AMP;
	v->a[46515] = anon_sym_GT_AMP;
	v->a[46516] = anon_sym_GT_PIPE;
	v->a[46517] = anon_sym_LT_AMP_DASH;
	v->a[46518] = anon_sym_GT_AMP_DASH;
	v->a[46519] = anon_sym_LT_LT_DASH;
	small_parse_table_2326(v);
}

void	small_parse_table_2326(t_small_parse_table_array *v)
{
	v->a[46520] = anon_sym_LT_LT_LT;
	v->a[46521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46522] = anon_sym_DOLLAR_LBRACK;
	v->a[46523] = anon_sym_DOLLAR;
	v->a[46524] = sym__special_character;
	v->a[46525] = anon_sym_DQUOTE;
	v->a[46526] = sym_raw_string;
	v->a[46527] = sym_ansi_c_string;
	v->a[46528] = aux_sym_number_token1;
	v->a[46529] = aux_sym_number_token2;
	v->a[46530] = anon_sym_DOLLAR_LBRACE;
	v->a[46531] = anon_sym_DOLLAR_LPAREN;
	v->a[46532] = anon_sym_BQUOTE;
	v->a[46533] = anon_sym_DOLLAR_BQUOTE;
	v->a[46534] = anon_sym_LT_LPAREN;
	v->a[46535] = anon_sym_GT_LPAREN;
	v->a[46536] = sym_word;
	v->a[46537] = 21;
	v->a[46538] = actions(3);
	v->a[46539] = 1;
	small_parse_table_2327(v);
}

void	small_parse_table_2327(t_small_parse_table_array *v)
{
	v->a[46540] = sym_comment;
	v->a[46541] = actions(4078);
	v->a[46542] = 1;
	v->a[46543] = anon_sym_DOLLAR_LBRACK;
	v->a[46544] = actions(4080);
	v->a[46545] = 1;
	v->a[46546] = anon_sym_DOLLAR;
	v->a[46547] = actions(4084);
	v->a[46548] = 1;
	v->a[46549] = anon_sym_DQUOTE;
	v->a[46550] = actions(4086);
	v->a[46551] = 1;
	v->a[46552] = aux_sym_number_token1;
	v->a[46553] = actions(4088);
	v->a[46554] = 1;
	v->a[46555] = aux_sym_number_token2;
	v->a[46556] = actions(4090);
	v->a[46557] = 1;
	v->a[46558] = anon_sym_DOLLAR_LBRACE;
	v->a[46559] = actions(4092);
	small_parse_table_2328(v);
}

void	small_parse_table_2328(t_small_parse_table_array *v)
{
	v->a[46560] = 1;
	v->a[46561] = anon_sym_DOLLAR_LPAREN;
	v->a[46562] = actions(4094);
	v->a[46563] = 1;
	v->a[46564] = anon_sym_BQUOTE;
	v->a[46565] = actions(4096);
	v->a[46566] = 1;
	v->a[46567] = anon_sym_DOLLAR_BQUOTE;
	v->a[46568] = actions(4102);
	v->a[46569] = 1;
	v->a[46570] = sym__brace_start;
	v->a[46571] = actions(5303);
	v->a[46572] = 1;
	v->a[46573] = sym__special_character;
	v->a[46574] = actions(5305);
	v->a[46575] = 1;
	v->a[46576] = sym_test_operator;
	v->a[46577] = state(4546);
	v->a[46578] = 1;
	v->a[46579] = aux_sym__literal_repeat1;
	small_parse_table_2329(v);
}

void	small_parse_table_2329(t_small_parse_table_array *v)
{
	v->a[46580] = state(4907);
	v->a[46581] = 1;
	v->a[46582] = sym_concatenation;
	v->a[46583] = actions(2500);
	v->a[46584] = 2;
	v->a[46585] = sym_file_descriptor;
	v->a[46586] = aux_sym_heredoc_redirect_token1;
	v->a[46587] = actions(4076);
	v->a[46588] = 2;
	v->a[46589] = anon_sym_LPAREN_LPAREN;
	v->a[46590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46591] = actions(4098);
	v->a[46592] = 2;
	v->a[46593] = anon_sym_LT_LPAREN;
	v->a[46594] = anon_sym_GT_LPAREN;
	v->a[46595] = actions(5301);
	v->a[46596] = 3;
	v->a[46597] = sym_raw_string;
	v->a[46598] = sym_ansi_c_string;
	v->a[46599] = sym_word;
	small_parse_table_2330(v);
}

/* EOF small_parse_table_465.c */
