/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_217.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1085(t_small_parse_table_array *v)
{
	v->a[21700] = anon_sym_LT_LT;
	v->a[21701] = anon_sym_LT_LT_DASH;
	v->a[21702] = aux_sym_heredoc_redirect_token1;
	v->a[21703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21704] = anon_sym_AMP;
	v->a[21705] = anon_sym_DOLLAR;
	v->a[21706] = anon_sym_DQUOTE;
	v->a[21707] = sym_raw_string;
	v->a[21708] = sym_number;
	v->a[21709] = anon_sym_DOLLAR_LBRACE;
	v->a[21710] = anon_sym_DOLLAR_LPAREN;
	v->a[21711] = anon_sym_BQUOTE;
	v->a[21712] = sym_word;
	v->a[21713] = anon_sym_SEMI;
	v->a[21714] = 5;
	v->a[21715] = actions(3);
	v->a[21716] = 1;
	v->a[21717] = sym_comment;
	v->a[21718] = state(198);
	v->a[21719] = 2;
	small_parse_table_1086(v);
}

void	small_parse_table_1086(t_small_parse_table_array *v)
{
	v->a[21720] = sym_concatenation;
	v->a[21721] = aux_sym_for_statement_repeat1;
	v->a[21722] = actions(575);
	v->a[21723] = 3;
	v->a[21724] = sym_file_descriptor;
	v->a[21725] = sym_variable_name;
	v->a[21726] = ts_builtin_sym_end;
	v->a[21727] = state(456);
	v->a[21728] = 5;
	v->a[21729] = sym_arithmetic_expansion;
	v->a[21730] = sym_string;
	v->a[21731] = sym_simple_expansion;
	v->a[21732] = sym_expansion;
	v->a[21733] = sym_command_substitution;
	v->a[21734] = actions(573);
	v->a[21735] = 26;
	v->a[21736] = anon_sym_PIPE;
	v->a[21737] = anon_sym_SEMI_SEMI;
	v->a[21738] = anon_sym_AMP_AMP;
	v->a[21739] = anon_sym_PIPE_PIPE;
	small_parse_table_1087(v);
}

void	small_parse_table_1087(t_small_parse_table_array *v)
{
	v->a[21740] = anon_sym_LT;
	v->a[21741] = anon_sym_GT;
	v->a[21742] = anon_sym_GT_GT;
	v->a[21743] = anon_sym_LT_AMP;
	v->a[21744] = anon_sym_GT_AMP;
	v->a[21745] = anon_sym_GT_PIPE;
	v->a[21746] = anon_sym_LT_AMP_DASH;
	v->a[21747] = anon_sym_GT_AMP_DASH;
	v->a[21748] = anon_sym_LT_LT;
	v->a[21749] = anon_sym_LT_LT_DASH;
	v->a[21750] = aux_sym_heredoc_redirect_token1;
	v->a[21751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21752] = anon_sym_AMP;
	v->a[21753] = anon_sym_DOLLAR;
	v->a[21754] = anon_sym_DQUOTE;
	v->a[21755] = sym_raw_string;
	v->a[21756] = sym_number;
	v->a[21757] = anon_sym_DOLLAR_LBRACE;
	v->a[21758] = anon_sym_DOLLAR_LPAREN;
	v->a[21759] = anon_sym_BQUOTE;
	small_parse_table_1088(v);
}

void	small_parse_table_1088(t_small_parse_table_array *v)
{
	v->a[21760] = sym_word;
	v->a[21761] = anon_sym_SEMI;
	v->a[21762] = 5;
	v->a[21763] = actions(3);
	v->a[21764] = 1;
	v->a[21765] = sym_comment;
	v->a[21766] = actions(602);
	v->a[21767] = 2;
	v->a[21768] = sym_file_descriptor;
	v->a[21769] = sym_variable_name;
	v->a[21770] = state(203);
	v->a[21771] = 2;
	v->a[21772] = sym_concatenation;
	v->a[21773] = aux_sym_for_statement_repeat1;
	v->a[21774] = state(462);
	v->a[21775] = 5;
	v->a[21776] = sym_arithmetic_expansion;
	v->a[21777] = sym_string;
	v->a[21778] = sym_simple_expansion;
	v->a[21779] = sym_expansion;
	small_parse_table_1089(v);
}

void	small_parse_table_1089(t_small_parse_table_array *v)
{
	v->a[21780] = sym_command_substitution;
	v->a[21781] = actions(604);
	v->a[21782] = 27;
	v->a[21783] = anon_sym_esac;
	v->a[21784] = anon_sym_PIPE;
	v->a[21785] = anon_sym_SEMI_SEMI;
	v->a[21786] = anon_sym_AMP_AMP;
	v->a[21787] = anon_sym_PIPE_PIPE;
	v->a[21788] = anon_sym_LT;
	v->a[21789] = anon_sym_GT;
	v->a[21790] = anon_sym_GT_GT;
	v->a[21791] = anon_sym_LT_AMP;
	v->a[21792] = anon_sym_GT_AMP;
	v->a[21793] = anon_sym_GT_PIPE;
	v->a[21794] = anon_sym_LT_AMP_DASH;
	v->a[21795] = anon_sym_GT_AMP_DASH;
	v->a[21796] = anon_sym_LT_LT;
	v->a[21797] = anon_sym_LT_LT_DASH;
	v->a[21798] = aux_sym_heredoc_redirect_token1;
	v->a[21799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1090(v);
}

/* EOF small_parse_table_217.c */
