/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_257.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1285(t_small_parse_table_array *v)
{
	v->a[25700] = anon_sym_PIPE_PIPE;
	v->a[25701] = anon_sym_LT;
	v->a[25702] = anon_sym_GT;
	v->a[25703] = anon_sym_GT_GT;
	v->a[25704] = anon_sym_AMP_GT;
	v->a[25705] = anon_sym_AMP_GT_GT;
	v->a[25706] = anon_sym_LT_AMP;
	v->a[25707] = anon_sym_GT_AMP;
	v->a[25708] = anon_sym_GT_PIPE;
	v->a[25709] = anon_sym_LT_AMP_DASH;
	v->a[25710] = anon_sym_GT_AMP_DASH;
	v->a[25711] = anon_sym_LT_LT;
	v->a[25712] = anon_sym_LT_LT_DASH;
	v->a[25713] = aux_sym_heredoc_redirect_token1;
	v->a[25714] = anon_sym_AMP;
	v->a[25715] = anon_sym_SEMI;
	v->a[25716] = 12;
	v->a[25717] = actions(3);
	v->a[25718] = 1;
	v->a[25719] = sym_comment;
	small_parse_table_1286(v);
}

void	small_parse_table_1286(t_small_parse_table_array *v)
{
	v->a[25720] = actions(538);
	v->a[25721] = 1;
	v->a[25722] = sym_file_descriptor;
	v->a[25723] = actions(718);
	v->a[25724] = 1;
	v->a[25725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25726] = actions(720);
	v->a[25727] = 1;
	v->a[25728] = anon_sym_DOLLAR;
	v->a[25729] = actions(722);
	v->a[25730] = 1;
	v->a[25731] = anon_sym_DQUOTE;
	v->a[25732] = actions(724);
	v->a[25733] = 1;
	v->a[25734] = anon_sym_DOLLAR_LBRACE;
	v->a[25735] = actions(726);
	v->a[25736] = 1;
	v->a[25737] = anon_sym_DOLLAR_LPAREN;
	v->a[25738] = actions(728);
	v->a[25739] = 1;
	small_parse_table_1287(v);
}

void	small_parse_table_1287(t_small_parse_table_array *v)
{
	v->a[25740] = anon_sym_BQUOTE;
	v->a[25741] = state(263);
	v->a[25742] = 2;
	v->a[25743] = sym_concatenation;
	v->a[25744] = aux_sym_for_statement_repeat1;
	v->a[25745] = actions(873);
	v->a[25746] = 3;
	v->a[25747] = sym_raw_string;
	v->a[25748] = sym_number;
	v->a[25749] = sym_word;
	v->a[25750] = state(647);
	v->a[25751] = 5;
	v->a[25752] = sym_arithmetic_expansion;
	v->a[25753] = sym_string;
	v->a[25754] = sym_simple_expansion;
	v->a[25755] = sym_expansion;
	v->a[25756] = sym_command_substitution;
	v->a[25757] = actions(540);
	v->a[25758] = 19;
	v->a[25759] = anon_sym_PIPE;
	small_parse_table_1288(v);
}

void	small_parse_table_1288(t_small_parse_table_array *v)
{
	v->a[25760] = anon_sym_SEMI_SEMI;
	v->a[25761] = anon_sym_AMP_AMP;
	v->a[25762] = anon_sym_PIPE_PIPE;
	v->a[25763] = anon_sym_LT;
	v->a[25764] = anon_sym_GT;
	v->a[25765] = anon_sym_GT_GT;
	v->a[25766] = anon_sym_AMP_GT;
	v->a[25767] = anon_sym_AMP_GT_GT;
	v->a[25768] = anon_sym_LT_AMP;
	v->a[25769] = anon_sym_GT_AMP;
	v->a[25770] = anon_sym_GT_PIPE;
	v->a[25771] = anon_sym_LT_AMP_DASH;
	v->a[25772] = anon_sym_GT_AMP_DASH;
	v->a[25773] = anon_sym_LT_LT;
	v->a[25774] = anon_sym_LT_LT_DASH;
	v->a[25775] = aux_sym_heredoc_redirect_token1;
	v->a[25776] = anon_sym_AMP;
	v->a[25777] = anon_sym_SEMI;
	v->a[25778] = 12;
	v->a[25779] = actions(3);
	small_parse_table_1289(v);
}

void	small_parse_table_1289(t_small_parse_table_array *v)
{
	v->a[25780] = 1;
	v->a[25781] = sym_comment;
	v->a[25782] = actions(766);
	v->a[25783] = 1;
	v->a[25784] = anon_sym_PIPE;
	v->a[25785] = actions(774);
	v->a[25786] = 1;
	v->a[25787] = sym_file_descriptor;
	v->a[25788] = actions(809);
	v->a[25789] = 1;
	v->a[25790] = anon_sym_SEMI_SEMI;
	v->a[25791] = actions(895);
	v->a[25792] = 1;
	v->a[25793] = sym_variable_name;
	v->a[25794] = state(728);
	v->a[25795] = 1;
	v->a[25796] = sym_terminator;
	v->a[25797] = actions(804);
	v->a[25798] = 2;
	v->a[25799] = anon_sym_LT_LT;
	small_parse_table_1290(v);
}

/* EOF small_parse_table_257.c */
