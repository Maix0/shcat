/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_237.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1185(t_small_parse_table_array *v)
{
	v->a[23700] = sym_comment;
	v->a[23701] = actions(3785);
	v->a[23702] = 1;
	v->a[23703] = anon_sym_DOLLAR_LBRACK;
	v->a[23704] = actions(3787);
	v->a[23705] = 1;
	v->a[23706] = anon_sym_DOLLAR;
	v->a[23707] = actions(3791);
	v->a[23708] = 1;
	v->a[23709] = anon_sym_DQUOTE;
	v->a[23710] = actions(3793);
	v->a[23711] = 1;
	v->a[23712] = aux_sym_number_token1;
	v->a[23713] = actions(3795);
	v->a[23714] = 1;
	v->a[23715] = aux_sym_number_token2;
	v->a[23716] = actions(3797);
	v->a[23717] = 1;
	v->a[23718] = anon_sym_DOLLAR_LBRACE;
	v->a[23719] = actions(3799);
	small_parse_table_1186(v);
}

void	small_parse_table_1186(t_small_parse_table_array *v)
{
	v->a[23720] = 1;
	v->a[23721] = anon_sym_DOLLAR_LPAREN;
	v->a[23722] = actions(3803);
	v->a[23723] = 1;
	v->a[23724] = anon_sym_DOLLAR_BQUOTE;
	v->a[23725] = actions(3809);
	v->a[23726] = 1;
	v->a[23727] = sym__brace_start;
	v->a[23728] = actions(4070);
	v->a[23729] = 1;
	v->a[23730] = sym__special_character;
	v->a[23731] = actions(4072);
	v->a[23732] = 1;
	v->a[23733] = sym_test_operator;
	v->a[23734] = state(4305);
	v->a[23735] = 1;
	v->a[23736] = aux_sym__literal_repeat1;
	v->a[23737] = state(4736);
	v->a[23738] = 1;
	v->a[23739] = sym_concatenation;
	small_parse_table_1187(v);
}

void	small_parse_table_1187(t_small_parse_table_array *v)
{
	v->a[23740] = actions(2500);
	v->a[23741] = 2;
	v->a[23742] = sym_file_descriptor;
	v->a[23743] = aux_sym_heredoc_redirect_token1;
	v->a[23744] = actions(3783);
	v->a[23745] = 2;
	v->a[23746] = anon_sym_LPAREN_LPAREN;
	v->a[23747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23748] = actions(3805);
	v->a[23749] = 2;
	v->a[23750] = anon_sym_LT_LPAREN;
	v->a[23751] = anon_sym_GT_LPAREN;
	v->a[23752] = actions(4068);
	v->a[23753] = 3;
	v->a[23754] = sym_raw_string;
	v->a[23755] = sym_ansi_c_string;
	v->a[23756] = sym_word;
	v->a[23757] = state(4472);
	v->a[23758] = 9;
	v->a[23759] = sym_arithmetic_expansion;
	small_parse_table_1188(v);
}

void	small_parse_table_1188(t_small_parse_table_array *v)
{
	v->a[23760] = sym_brace_expression;
	v->a[23761] = sym_string;
	v->a[23762] = sym_translated_string;
	v->a[23763] = sym_number;
	v->a[23764] = sym_simple_expansion;
	v->a[23765] = sym_expansion;
	v->a[23766] = sym_command_substitution;
	v->a[23767] = sym_process_substitution;
	v->a[23768] = actions(2498);
	v->a[23769] = 21;
	v->a[23770] = anon_sym_SEMI;
	v->a[23771] = anon_sym_PIPE_PIPE;
	v->a[23772] = anon_sym_AMP_AMP;
	v->a[23773] = anon_sym_PIPE;
	v->a[23774] = anon_sym_AMP;
	v->a[23775] = anon_sym_LT;
	v->a[23776] = anon_sym_GT;
	v->a[23777] = anon_sym_LT_LT;
	v->a[23778] = anon_sym_GT_GT;
	v->a[23779] = anon_sym_SEMI_SEMI;
	small_parse_table_1189(v);
}

void	small_parse_table_1189(t_small_parse_table_array *v)
{
	v->a[23780] = anon_sym_PIPE_AMP;
	v->a[23781] = anon_sym_AMP_GT;
	v->a[23782] = anon_sym_AMP_GT_GT;
	v->a[23783] = anon_sym_LT_AMP;
	v->a[23784] = anon_sym_GT_AMP;
	v->a[23785] = anon_sym_GT_PIPE;
	v->a[23786] = anon_sym_LT_AMP_DASH;
	v->a[23787] = anon_sym_GT_AMP_DASH;
	v->a[23788] = anon_sym_LT_LT_DASH;
	v->a[23789] = anon_sym_LT_LT_LT;
	v->a[23790] = anon_sym_BQUOTE;
	v->a[23791] = 21;
	v->a[23792] = actions(3);
	v->a[23793] = 1;
	v->a[23794] = sym_comment;
	v->a[23795] = actions(4078);
	v->a[23796] = 1;
	v->a[23797] = anon_sym_DOLLAR_LBRACK;
	v->a[23798] = actions(4080);
	v->a[23799] = 1;
	small_parse_table_1190(v);
}

/* EOF small_parse_table_237.c */
