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
	v->a[25700] = anon_sym_QMARK;
	v->a[25701] = anon_sym_COLON;
	v->a[25702] = anon_sym_PLUS_PLUS2;
	v->a[25703] = anon_sym_DASH_DASH2;
	v->a[25704] = 12;
	v->a[25705] = actions(3);
	v->a[25706] = 1;
	v->a[25707] = sym_comment;
	v->a[25708] = actions(577);
	v->a[25709] = 1;
	v->a[25710] = sym_file_descriptor;
	v->a[25711] = actions(824);
	v->a[25712] = 1;
	v->a[25713] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25714] = actions(827);
	v->a[25715] = 1;
	v->a[25716] = anon_sym_DOLLAR;
	v->a[25717] = actions(830);
	v->a[25718] = 1;
	v->a[25719] = anon_sym_DQUOTE;
	small_parse_table_1286(v);
}

void	small_parse_table_1286(t_small_parse_table_array *v)
{
	v->a[25720] = actions(833);
	v->a[25721] = 1;
	v->a[25722] = anon_sym_DOLLAR_LBRACE;
	v->a[25723] = actions(836);
	v->a[25724] = 1;
	v->a[25725] = anon_sym_DOLLAR_LPAREN;
	v->a[25726] = actions(839);
	v->a[25727] = 1;
	v->a[25728] = anon_sym_BQUOTE;
	v->a[25729] = state(272);
	v->a[25730] = 2;
	v->a[25731] = sym_concatenation;
	v->a[25732] = aux_sym_for_statement_repeat1;
	v->a[25733] = actions(996);
	v->a[25734] = 3;
	v->a[25735] = sym_raw_string;
	v->a[25736] = sym_number;
	v->a[25737] = sym_word;
	v->a[25738] = state(628);
	v->a[25739] = 5;
	small_parse_table_1287(v);
}

void	small_parse_table_1287(t_small_parse_table_array *v)
{
	v->a[25740] = sym_arithmetic_expansion;
	v->a[25741] = sym_string;
	v->a[25742] = sym_simple_expansion;
	v->a[25743] = sym_expansion;
	v->a[25744] = sym_command_substitution;
	v->a[25745] = actions(582);
	v->a[25746] = 17;
	v->a[25747] = anon_sym_PIPE;
	v->a[25748] = anon_sym_SEMI_SEMI;
	v->a[25749] = anon_sym_AMP_AMP;
	v->a[25750] = anon_sym_PIPE_PIPE;
	v->a[25751] = anon_sym_LT;
	v->a[25752] = anon_sym_GT;
	v->a[25753] = anon_sym_GT_GT;
	v->a[25754] = anon_sym_LT_AMP;
	v->a[25755] = anon_sym_GT_AMP;
	v->a[25756] = anon_sym_GT_PIPE;
	v->a[25757] = anon_sym_LT_AMP_DASH;
	v->a[25758] = anon_sym_GT_AMP_DASH;
	v->a[25759] = anon_sym_LT_LT;
	small_parse_table_1288(v);
}

void	small_parse_table_1288(t_small_parse_table_array *v)
{
	v->a[25760] = anon_sym_LT_LT_DASH;
	v->a[25761] = aux_sym_heredoc_redirect_token1;
	v->a[25762] = anon_sym_AMP;
	v->a[25763] = anon_sym_SEMI;
	v->a[25764] = 11;
	v->a[25765] = actions(3);
	v->a[25766] = 1;
	v->a[25767] = sym_comment;
	v->a[25768] = actions(682);
	v->a[25769] = 1;
	v->a[25770] = anon_sym_PIPE;
	v->a[25771] = actions(690);
	v->a[25772] = 1;
	v->a[25773] = sym_file_descriptor;
	v->a[25774] = actions(926);
	v->a[25775] = 1;
	v->a[25776] = sym_variable_name;
	v->a[25777] = state(649);
	v->a[25778] = 1;
	v->a[25779] = sym_terminator;
	small_parse_table_1289(v);
}

void	small_parse_table_1289(t_small_parse_table_array *v)
{
	v->a[25780] = actions(754);
	v->a[25781] = 2;
	v->a[25782] = anon_sym_LT_LT;
	v->a[25783] = anon_sym_LT_LT_DASH;
	v->a[25784] = actions(924);
	v->a[25785] = 2;
	v->a[25786] = anon_sym_AMP_AMP;
	v->a[25787] = anon_sym_PIPE_PIPE;
	v->a[25788] = state(1298);
	v->a[25789] = 2;
	v->a[25790] = sym_variable_assignment;
	v->a[25791] = aux_sym__variable_assignments_repeat1;
	v->a[25792] = state(1268);
	v->a[25793] = 3;
	v->a[25794] = sym_file_redirect;
	v->a[25795] = sym_heredoc_redirect;
	v->a[25796] = aux_sym_redirected_statement_repeat1;
	v->a[25797] = actions(999);
	v->a[25798] = 4;
	v->a[25799] = anon_sym_SEMI_SEMI;
	small_parse_table_1290(v);
}

/* EOF small_parse_table_257.c */
