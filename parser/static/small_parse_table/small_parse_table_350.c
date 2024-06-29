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
	v->a[35000] = 3;
	v->a[35001] = sym_raw_string;
	v->a[35002] = sym_number;
	v->a[35003] = sym_word;
	v->a[35004] = state(827);
	v->a[35005] = 5;
	v->a[35006] = sym_arithmetic_expansion;
	v->a[35007] = sym_string;
	v->a[35008] = sym_simple_expansion;
	v->a[35009] = sym_expansion;
	v->a[35010] = sym_command_substitution;
	v->a[35011] = actions(540);
	v->a[35012] = 16;
	v->a[35013] = anon_sym_PIPE;
	v->a[35014] = anon_sym_AMP_AMP;
	v->a[35015] = anon_sym_PIPE_PIPE;
	v->a[35016] = anon_sym_LT;
	v->a[35017] = anon_sym_GT;
	v->a[35018] = anon_sym_GT_GT;
	v->a[35019] = anon_sym_AMP_GT;
	small_parse_table_1751(v);
}

void	small_parse_table_1751(t_small_parse_table_array *v)
{
	v->a[35020] = anon_sym_AMP_GT_GT;
	v->a[35021] = anon_sym_LT_AMP;
	v->a[35022] = anon_sym_GT_AMP;
	v->a[35023] = anon_sym_GT_PIPE;
	v->a[35024] = anon_sym_LT_AMP_DASH;
	v->a[35025] = anon_sym_GT_AMP_DASH;
	v->a[35026] = anon_sym_LT_LT;
	v->a[35027] = anon_sym_LT_LT_DASH;
	v->a[35028] = aux_sym_heredoc_redirect_token1;
	v->a[35029] = 3;
	v->a[35030] = actions(3);
	v->a[35031] = 1;
	v->a[35032] = sym_comment;
	v->a[35033] = actions(1195);
	v->a[35034] = 4;
	v->a[35035] = sym_file_descriptor;
	v->a[35036] = sym__concat;
	v->a[35037] = sym_variable_name;
	v->a[35038] = ts_builtin_sym_end;
	v->a[35039] = actions(1193);
	small_parse_table_1752(v);
}

void	small_parse_table_1752(t_small_parse_table_array *v)
{
	v->a[35040] = 29;
	v->a[35041] = anon_sym_PIPE;
	v->a[35042] = anon_sym_SEMI_SEMI;
	v->a[35043] = anon_sym_AMP_AMP;
	v->a[35044] = anon_sym_PIPE_PIPE;
	v->a[35045] = anon_sym_LT;
	v->a[35046] = anon_sym_GT;
	v->a[35047] = anon_sym_GT_GT;
	v->a[35048] = anon_sym_AMP_GT;
	v->a[35049] = anon_sym_AMP_GT_GT;
	v->a[35050] = anon_sym_LT_AMP;
	v->a[35051] = anon_sym_GT_AMP;
	v->a[35052] = anon_sym_GT_PIPE;
	v->a[35053] = anon_sym_LT_AMP_DASH;
	v->a[35054] = anon_sym_GT_AMP_DASH;
	v->a[35055] = anon_sym_LT_LT;
	v->a[35056] = anon_sym_LT_LT_DASH;
	v->a[35057] = aux_sym_heredoc_redirect_token1;
	v->a[35058] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35059] = anon_sym_AMP;
	small_parse_table_1753(v);
}

void	small_parse_table_1753(t_small_parse_table_array *v)
{
	v->a[35060] = aux_sym_concatenation_token1;
	v->a[35061] = anon_sym_DOLLAR;
	v->a[35062] = anon_sym_DQUOTE;
	v->a[35063] = sym_raw_string;
	v->a[35064] = sym_number;
	v->a[35065] = anon_sym_DOLLAR_LBRACE;
	v->a[35066] = anon_sym_DOLLAR_LPAREN;
	v->a[35067] = anon_sym_BQUOTE;
	v->a[35068] = sym_word;
	v->a[35069] = anon_sym_SEMI;
	v->a[35070] = 6;
	v->a[35071] = actions(3);
	v->a[35072] = 1;
	v->a[35073] = sym_comment;
	v->a[35074] = actions(988);
	v->a[35075] = 1;
	v->a[35076] = sym_file_descriptor;
	v->a[35077] = actions(1280);
	v->a[35078] = 1;
	v->a[35079] = aux_sym_concatenation_token1;
	small_parse_table_1754(v);
}

void	small_parse_table_1754(t_small_parse_table_array *v)
{
	v->a[35080] = actions(1283);
	v->a[35081] = 1;
	v->a[35082] = sym__concat;
	v->a[35083] = state(446);
	v->a[35084] = 1;
	v->a[35085] = aux_sym_concatenation_repeat1;
	v->a[35086] = actions(983);
	v->a[35087] = 29;
	v->a[35088] = anon_sym_PIPE;
	v->a[35089] = anon_sym_RPAREN;
	v->a[35090] = anon_sym_SEMI_SEMI;
	v->a[35091] = anon_sym_AMP_AMP;
	v->a[35092] = anon_sym_PIPE_PIPE;
	v->a[35093] = anon_sym_LT;
	v->a[35094] = anon_sym_GT;
	v->a[35095] = anon_sym_GT_GT;
	v->a[35096] = anon_sym_AMP_GT;
	v->a[35097] = anon_sym_AMP_GT_GT;
	v->a[35098] = anon_sym_LT_AMP;
	v->a[35099] = anon_sym_GT_AMP;
	small_parse_table_1755(v);
}

/* EOF small_parse_table_350.c */
