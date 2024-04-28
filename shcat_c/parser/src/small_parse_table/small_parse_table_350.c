/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_350.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1750(t_small_parse_table_array *v)
{
	v->a[35000] = anon_sym_DOLLAR_LBRACE;
	v->a[35001] = actions(4743);
	v->a[35002] = 1;
	v->a[35003] = anon_sym_DOLLAR_LPAREN;
	v->a[35004] = actions(4746);
	v->a[35005] = 1;
	v->a[35006] = anon_sym_BQUOTE;
	v->a[35007] = actions(4749);
	v->a[35008] = 1;
	v->a[35009] = anon_sym_DOLLAR_BQUOTE;
	v->a[35010] = actions(4755);
	v->a[35011] = 1;
	v->a[35012] = sym_test_operator;
	v->a[35013] = actions(4758);
	v->a[35014] = 1;
	v->a[35015] = sym__brace_start;
	v->a[35016] = state(2914);
	v->a[35017] = 1;
	v->a[35018] = aux_sym__literal_repeat1;
	v->a[35019] = actions(4716);
	small_parse_table_1751(v);
}

void	small_parse_table_1751(t_small_parse_table_array *v)
{
	v->a[35020] = 2;
	v->a[35021] = anon_sym_LPAREN_LPAREN;
	v->a[35022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35023] = actions(4731);
	v->a[35024] = 2;
	v->a[35025] = sym_raw_string;
	v->a[35026] = sym_ansi_c_string;
	v->a[35027] = actions(4752);
	v->a[35028] = 2;
	v->a[35029] = anon_sym_LT_LPAREN;
	v->a[35030] = anon_sym_GT_LPAREN;
	v->a[35031] = state(936);
	v->a[35032] = 2;
	v->a[35033] = sym_concatenation;
	v->a[35034] = aux_sym_for_statement_repeat1;
	v->a[35035] = actions(2214);
	v->a[35036] = 7;
	v->a[35037] = anon_sym_PIPE;
	v->a[35038] = anon_sym_LT;
	v->a[35039] = anon_sym_GT;
	small_parse_table_1752(v);
}

void	small_parse_table_1752(t_small_parse_table_array *v)
{
	v->a[35040] = anon_sym_LT_LT;
	v->a[35041] = anon_sym_AMP_GT;
	v->a[35042] = anon_sym_LT_AMP;
	v->a[35043] = anon_sym_GT_AMP;
	v->a[35044] = state(2487);
	v->a[35045] = 9;
	v->a[35046] = sym_arithmetic_expansion;
	v->a[35047] = sym_brace_expression;
	v->a[35048] = sym_string;
	v->a[35049] = sym_translated_string;
	v->a[35050] = sym_number;
	v->a[35051] = sym_simple_expansion;
	v->a[35052] = sym_expansion;
	v->a[35053] = sym_command_substitution;
	v->a[35054] = sym_process_substitution;
	v->a[35055] = actions(2216);
	v->a[35056] = 11;
	v->a[35057] = sym_file_descriptor;
	v->a[35058] = anon_sym_PIPE_PIPE;
	v->a[35059] = anon_sym_AMP_AMP;
	small_parse_table_1753(v);
}

void	small_parse_table_1753(t_small_parse_table_array *v)
{
	v->a[35060] = anon_sym_GT_GT;
	v->a[35061] = anon_sym_PIPE_AMP;
	v->a[35062] = anon_sym_AMP_GT_GT;
	v->a[35063] = anon_sym_GT_PIPE;
	v->a[35064] = anon_sym_LT_AMP_DASH;
	v->a[35065] = anon_sym_GT_AMP_DASH;
	v->a[35066] = anon_sym_LT_LT_DASH;
	v->a[35067] = anon_sym_LT_LT_LT;
	v->a[35068] = 30;
	v->a[35069] = actions(47);
	v->a[35070] = 1;
	v->a[35071] = anon_sym_DOLLAR_LBRACK;
	v->a[35072] = actions(49);
	v->a[35073] = 1;
	v->a[35074] = anon_sym_DOLLAR;
	v->a[35075] = actions(53);
	v->a[35076] = 1;
	v->a[35077] = anon_sym_DQUOTE;
	v->a[35078] = actions(57);
	v->a[35079] = 1;
	small_parse_table_1754(v);
}

void	small_parse_table_1754(t_small_parse_table_array *v)
{
	v->a[35080] = aux_sym_number_token1;
	v->a[35081] = actions(59);
	v->a[35082] = 1;
	v->a[35083] = aux_sym_number_token2;
	v->a[35084] = actions(61);
	v->a[35085] = 1;
	v->a[35086] = anon_sym_DOLLAR_LBRACE;
	v->a[35087] = actions(63);
	v->a[35088] = 1;
	v->a[35089] = anon_sym_DOLLAR_LPAREN;
	v->a[35090] = actions(65);
	v->a[35091] = 1;
	v->a[35092] = anon_sym_BQUOTE;
	v->a[35093] = actions(67);
	v->a[35094] = 1;
	v->a[35095] = anon_sym_DOLLAR_BQUOTE;
	v->a[35096] = actions(71);
	v->a[35097] = 1;
	v->a[35098] = sym_comment;
	v->a[35099] = actions(77);
	small_parse_table_1755(v);
}

/* EOF small_parse_table_350.c */
