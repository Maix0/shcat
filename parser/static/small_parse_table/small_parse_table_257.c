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
	v->a[25700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25701] = actions(907);
	v->a[25702] = 1;
	v->a[25703] = anon_sym_DOLLAR;
	v->a[25704] = actions(909);
	v->a[25705] = 1;
	v->a[25706] = anon_sym_DQUOTE;
	v->a[25707] = actions(911);
	v->a[25708] = 1;
	v->a[25709] = aux_sym_number_token1;
	v->a[25710] = actions(913);
	v->a[25711] = 1;
	v->a[25712] = aux_sym_number_token2;
	v->a[25713] = actions(915);
	v->a[25714] = 1;
	v->a[25715] = anon_sym_DOLLAR_LBRACE;
	v->a[25716] = actions(917);
	v->a[25717] = 1;
	v->a[25718] = anon_sym_DOLLAR_LPAREN;
	v->a[25719] = actions(919);
	small_parse_table_1286(v);
}

void	small_parse_table_1286(t_small_parse_table_array *v)
{
	v->a[25720] = 1;
	v->a[25721] = anon_sym_BQUOTE;
	v->a[25722] = state(1099);
	v->a[25723] = 1;
	v->a[25724] = sym_concatenation;
	v->a[25725] = actions(755);
	v->a[25726] = 2;
	v->a[25727] = sym_file_descriptor;
	v->a[25728] = ts_builtin_sym_end;
	v->a[25729] = actions(957);
	v->a[25730] = 2;
	v->a[25731] = sym_raw_string;
	v->a[25732] = sym_word;
	v->a[25733] = state(1010);
	v->a[25734] = 6;
	v->a[25735] = sym_arithmetic_expansion;
	v->a[25736] = sym_string;
	v->a[25737] = sym_number;
	v->a[25738] = sym_simple_expansion;
	v->a[25739] = sym_expansion;
	small_parse_table_1287(v);
}

void	small_parse_table_1287(t_small_parse_table_array *v)
{
	v->a[25740] = sym_command_substitution;
	v->a[25741] = actions(757);
	v->a[25742] = 19;
	v->a[25743] = anon_sym_PIPE;
	v->a[25744] = anon_sym_SEMI_SEMI;
	v->a[25745] = anon_sym_AMP_AMP;
	v->a[25746] = anon_sym_PIPE_PIPE;
	v->a[25747] = anon_sym_LT;
	v->a[25748] = anon_sym_GT;
	v->a[25749] = anon_sym_GT_GT;
	v->a[25750] = anon_sym_AMP_GT;
	v->a[25751] = anon_sym_AMP_GT_GT;
	v->a[25752] = anon_sym_LT_AMP;
	v->a[25753] = anon_sym_GT_AMP;
	v->a[25754] = anon_sym_GT_PIPE;
	v->a[25755] = anon_sym_LT_AMP_DASH;
	v->a[25756] = anon_sym_GT_AMP_DASH;
	v->a[25757] = anon_sym_LT_LT;
	v->a[25758] = anon_sym_LT_LT_DASH;
	v->a[25759] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1288(v);
}

void	small_parse_table_1288(t_small_parse_table_array *v)
{
	v->a[25760] = anon_sym_AMP;
	v->a[25761] = anon_sym_SEMI;
	v->a[25762] = 22;
	v->a[25763] = actions(3);
	v->a[25764] = 1;
	v->a[25765] = sym_comment;
	v->a[25766] = actions(933);
	v->a[25767] = 1;
	v->a[25768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25769] = actions(935);
	v->a[25770] = 1;
	v->a[25771] = anon_sym_DOLLAR;
	v->a[25772] = actions(937);
	v->a[25773] = 1;
	v->a[25774] = anon_sym_DQUOTE;
	v->a[25775] = actions(939);
	v->a[25776] = 1;
	v->a[25777] = aux_sym_number_token1;
	v->a[25778] = actions(941);
	v->a[25779] = 1;
	small_parse_table_1289(v);
}

void	small_parse_table_1289(t_small_parse_table_array *v)
{
	v->a[25780] = aux_sym_number_token2;
	v->a[25781] = actions(943);
	v->a[25782] = 1;
	v->a[25783] = anon_sym_DOLLAR_LBRACE;
	v->a[25784] = actions(945);
	v->a[25785] = 1;
	v->a[25786] = anon_sym_DOLLAR_LPAREN;
	v->a[25787] = actions(947);
	v->a[25788] = 1;
	v->a[25789] = anon_sym_BQUOTE;
	v->a[25790] = actions(949);
	v->a[25791] = 1;
	v->a[25792] = sym_file_descriptor;
	v->a[25793] = actions(959);
	v->a[25794] = 1;
	v->a[25795] = aux_sym_heredoc_redirect_token1;
	v->a[25796] = state(1319);
	v->a[25797] = 1;
	v->a[25798] = aux_sym__heredoc_command;
	v->a[25799] = state(1832);
	small_parse_table_1290(v);
}

/* EOF small_parse_table_257.c */
