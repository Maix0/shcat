/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1026.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5130(t_small_parse_table_array *v)
{
	v->a[102600] = anon_sym_SEMI_SEMI;
	v->a[102601] = anon_sym_PIPE_AMP;
	v->a[102602] = anon_sym_AMP_AMP;
	v->a[102603] = anon_sym_PIPE_PIPE;
	v->a[102604] = anon_sym_LT;
	v->a[102605] = anon_sym_GT;
	v->a[102606] = anon_sym_GT_GT;
	v->a[102607] = anon_sym_AMP_GT;
	v->a[102608] = anon_sym_AMP_GT_GT;
	v->a[102609] = anon_sym_LT_AMP;
	v->a[102610] = anon_sym_GT_AMP;
	v->a[102611] = anon_sym_GT_PIPE;
	v->a[102612] = anon_sym_LT_AMP_DASH;
	v->a[102613] = anon_sym_GT_AMP_DASH;
	v->a[102614] = anon_sym_LT_LT;
	v->a[102615] = anon_sym_LT_LT_DASH;
	v->a[102616] = anon_sym_AMP;
	v->a[102617] = anon_sym_SEMI;
	v->a[102618] = 6;
	v->a[102619] = actions(3);
	small_parse_table_5131(v);
}

void	small_parse_table_5131(t_small_parse_table_array *v)
{
	v->a[102620] = 1;
	v->a[102621] = sym_comment;
	v->a[102622] = actions(5267);
	v->a[102623] = 1;
	v->a[102624] = aux_sym_concatenation_token1;
	v->a[102625] = actions(5269);
	v->a[102626] = 1;
	v->a[102627] = sym__concat;
	v->a[102628] = state(2107);
	v->a[102629] = 1;
	v->a[102630] = aux_sym_concatenation_repeat1;
	v->a[102631] = actions(1390);
	v->a[102632] = 2;
	v->a[102633] = sym_file_descriptor;
	v->a[102634] = aux_sym_heredoc_redirect_token1;
	v->a[102635] = actions(1388);
	v->a[102636] = 20;
	v->a[102637] = anon_sym_PIPE;
	v->a[102638] = anon_sym_SEMI_SEMI;
	v->a[102639] = anon_sym_PIPE_AMP;
	small_parse_table_5132(v);
}

void	small_parse_table_5132(t_small_parse_table_array *v)
{
	v->a[102640] = anon_sym_AMP_AMP;
	v->a[102641] = anon_sym_PIPE_PIPE;
	v->a[102642] = anon_sym_LT;
	v->a[102643] = anon_sym_GT;
	v->a[102644] = anon_sym_GT_GT;
	v->a[102645] = anon_sym_AMP_GT;
	v->a[102646] = anon_sym_AMP_GT_GT;
	v->a[102647] = anon_sym_LT_AMP;
	v->a[102648] = anon_sym_GT_AMP;
	v->a[102649] = anon_sym_GT_PIPE;
	v->a[102650] = anon_sym_LT_AMP_DASH;
	v->a[102651] = anon_sym_GT_AMP_DASH;
	v->a[102652] = anon_sym_LT_LT;
	v->a[102653] = anon_sym_LT_LT_DASH;
	v->a[102654] = anon_sym_AMP;
	v->a[102655] = anon_sym_BQUOTE;
	v->a[102656] = anon_sym_SEMI;
	v->a[102657] = 19;
	v->a[102658] = actions(3);
	v->a[102659] = 1;
	small_parse_table_5133(v);
}

void	small_parse_table_5133(t_small_parse_table_array *v)
{
	v->a[102660] = sym_comment;
	v->a[102661] = actions(2458);
	v->a[102662] = 1;
	v->a[102663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102664] = actions(2460);
	v->a[102665] = 1;
	v->a[102666] = anon_sym_DOLLAR;
	v->a[102667] = actions(2462);
	v->a[102668] = 1;
	v->a[102669] = sym__special_character;
	v->a[102670] = actions(2464);
	v->a[102671] = 1;
	v->a[102672] = anon_sym_DQUOTE;
	v->a[102673] = actions(2466);
	v->a[102674] = 1;
	v->a[102675] = aux_sym_number_token1;
	v->a[102676] = actions(2468);
	v->a[102677] = 1;
	v->a[102678] = aux_sym_number_token2;
	v->a[102679] = actions(2470);
	small_parse_table_5134(v);
}

void	small_parse_table_5134(t_small_parse_table_array *v)
{
	v->a[102680] = 1;
	v->a[102681] = anon_sym_DOLLAR_LBRACE;
	v->a[102682] = actions(2472);
	v->a[102683] = 1;
	v->a[102684] = anon_sym_DOLLAR_LPAREN;
	v->a[102685] = actions(2474);
	v->a[102686] = 1;
	v->a[102687] = anon_sym_BQUOTE;
	v->a[102688] = actions(2476);
	v->a[102689] = 1;
	v->a[102690] = anon_sym_DOLLAR_BQUOTE;
	v->a[102691] = actions(2480);
	v->a[102692] = 1;
	v->a[102693] = sym_test_operator;
	v->a[102694] = actions(2482);
	v->a[102695] = 1;
	v->a[102696] = sym__brace_start;
	v->a[102697] = actions(5927);
	v->a[102698] = 1;
	v->a[102699] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5135(v);
}

/* EOF small_parse_table_1026.c */
