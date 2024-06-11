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
	v->a[25700] = sym_number;
	v->a[25701] = sym_word;
	v->a[25702] = state(646);
	v->a[25703] = 5;
	v->a[25704] = sym_arithmetic_expansion;
	v->a[25705] = sym_string;
	v->a[25706] = sym_simple_expansion;
	v->a[25707] = sym_expansion;
	v->a[25708] = sym_command_substitution;
	v->a[25709] = actions(564);
	v->a[25710] = 19;
	v->a[25711] = anon_sym_PIPE;
	v->a[25712] = anon_sym_SEMI_SEMI;
	v->a[25713] = anon_sym_AMP_AMP;
	v->a[25714] = anon_sym_PIPE_PIPE;
	v->a[25715] = anon_sym_LT;
	v->a[25716] = anon_sym_GT;
	v->a[25717] = anon_sym_GT_GT;
	v->a[25718] = anon_sym_AMP_GT;
	v->a[25719] = anon_sym_AMP_GT_GT;
	small_parse_table_1286(v);
}

void	small_parse_table_1286(t_small_parse_table_array *v)
{
	v->a[25720] = anon_sym_LT_AMP;
	v->a[25721] = anon_sym_GT_AMP;
	v->a[25722] = anon_sym_GT_PIPE;
	v->a[25723] = anon_sym_LT_AMP_DASH;
	v->a[25724] = anon_sym_GT_AMP_DASH;
	v->a[25725] = anon_sym_LT_LT;
	v->a[25726] = anon_sym_LT_LT_DASH;
	v->a[25727] = aux_sym_heredoc_redirect_token1;
	v->a[25728] = anon_sym_AMP;
	v->a[25729] = anon_sym_SEMI;
	v->a[25730] = 11;
	v->a[25731] = actions(3);
	v->a[25732] = 1;
	v->a[25733] = sym_comment;
	v->a[25734] = actions(608);
	v->a[25735] = 1;
	v->a[25736] = sym_file_descriptor;
	v->a[25737] = actions(749);
	v->a[25738] = 1;
	v->a[25739] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1287(v);
}

void	small_parse_table_1287(t_small_parse_table_array *v)
{
	v->a[25740] = actions(751);
	v->a[25741] = 1;
	v->a[25742] = anon_sym_DOLLAR;
	v->a[25743] = actions(753);
	v->a[25744] = 1;
	v->a[25745] = anon_sym_DQUOTE;
	v->a[25746] = actions(755);
	v->a[25747] = 1;
	v->a[25748] = anon_sym_DOLLAR_LBRACE;
	v->a[25749] = actions(757);
	v->a[25750] = 1;
	v->a[25751] = anon_sym_DOLLAR_LPAREN;
	v->a[25752] = state(260);
	v->a[25753] = 2;
	v->a[25754] = sym_concatenation;
	v->a[25755] = aux_sym_for_statement_repeat1;
	v->a[25756] = actions(928);
	v->a[25757] = 3;
	v->a[25758] = sym_raw_string;
	v->a[25759] = sym_number;
	small_parse_table_1288(v);
}

void	small_parse_table_1288(t_small_parse_table_array *v)
{
	v->a[25760] = sym_word;
	v->a[25761] = state(646);
	v->a[25762] = 5;
	v->a[25763] = sym_arithmetic_expansion;
	v->a[25764] = sym_string;
	v->a[25765] = sym_simple_expansion;
	v->a[25766] = sym_expansion;
	v->a[25767] = sym_command_substitution;
	v->a[25768] = actions(610);
	v->a[25769] = 20;
	v->a[25770] = anon_sym_PIPE;
	v->a[25771] = anon_sym_SEMI_SEMI;
	v->a[25772] = anon_sym_AMP_AMP;
	v->a[25773] = anon_sym_PIPE_PIPE;
	v->a[25774] = anon_sym_LT;
	v->a[25775] = anon_sym_GT;
	v->a[25776] = anon_sym_GT_GT;
	v->a[25777] = anon_sym_AMP_GT;
	v->a[25778] = anon_sym_AMP_GT_GT;
	v->a[25779] = anon_sym_LT_AMP;
	small_parse_table_1289(v);
}

void	small_parse_table_1289(t_small_parse_table_array *v)
{
	v->a[25780] = anon_sym_GT_AMP;
	v->a[25781] = anon_sym_GT_PIPE;
	v->a[25782] = anon_sym_LT_AMP_DASH;
	v->a[25783] = anon_sym_GT_AMP_DASH;
	v->a[25784] = anon_sym_LT_LT;
	v->a[25785] = anon_sym_LT_LT_DASH;
	v->a[25786] = aux_sym_heredoc_redirect_token1;
	v->a[25787] = anon_sym_AMP;
	v->a[25788] = anon_sym_BQUOTE;
	v->a[25789] = anon_sym_SEMI;
	v->a[25790] = 12;
	v->a[25791] = actions(3);
	v->a[25792] = 1;
	v->a[25793] = sym_comment;
	v->a[25794] = actions(543);
	v->a[25795] = 1;
	v->a[25796] = sym_file_descriptor;
	v->a[25797] = actions(749);
	v->a[25798] = 1;
	v->a[25799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1290(v);
}

/* EOF small_parse_table_257.c */
