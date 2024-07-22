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
	v->a[35000] = state(1353);
	v->a[35001] = 3;
	v->a[35002] = sym_file_redirect;
	v->a[35003] = sym_heredoc_redirect;
	v->a[35004] = aux_sym_redirected_statement_repeat1;
	v->a[35005] = actions(780);
	v->a[35006] = 16;
	v->a[35007] = anon_sym_LT;
	v->a[35008] = anon_sym_GT;
	v->a[35009] = anon_sym_GT_GT;
	v->a[35010] = anon_sym_LT_AMP;
	v->a[35011] = anon_sym_GT_AMP;
	v->a[35012] = anon_sym_GT_PIPE;
	v->a[35013] = anon_sym_LT_GT;
	v->a[35014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35015] = anon_sym_DOLLAR;
	v->a[35016] = anon_sym_DQUOTE;
	v->a[35017] = sym_raw_string;
	v->a[35018] = sym_number;
	v->a[35019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1751(v);
}

void	small_parse_table_1751(t_small_parse_table_array *v)
{
	v->a[35020] = anon_sym_DOLLAR_LPAREN;
	v->a[35021] = anon_sym_BQUOTE;
	v->a[35022] = sym_word;
	v->a[35023] = 3;
	v->a[35024] = actions(3);
	v->a[35025] = 1;
	v->a[35026] = sym_comment;
	v->a[35027] = actions(515);
	v->a[35028] = 4;
	v->a[35029] = sym_file_descriptor;
	v->a[35030] = sym__concat;
	v->a[35031] = sym__bare_dollar;
	v->a[35032] = ts_builtin_sym_end;
	v->a[35033] = actions(513);
	v->a[35034] = 25;
	v->a[35035] = anon_sym_PIPE;
	v->a[35036] = anon_sym_SEMI_SEMI;
	v->a[35037] = anon_sym_AMP_AMP;
	v->a[35038] = anon_sym_PIPE_PIPE;
	v->a[35039] = anon_sym_LT;
	small_parse_table_1752(v);
}

void	small_parse_table_1752(t_small_parse_table_array *v)
{
	v->a[35040] = anon_sym_GT;
	v->a[35041] = anon_sym_GT_GT;
	v->a[35042] = anon_sym_LT_AMP;
	v->a[35043] = anon_sym_GT_AMP;
	v->a[35044] = anon_sym_GT_PIPE;
	v->a[35045] = anon_sym_LT_GT;
	v->a[35046] = anon_sym_LT_LT;
	v->a[35047] = anon_sym_LT_LT_DASH;
	v->a[35048] = aux_sym_heredoc_redirect_token1;
	v->a[35049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35050] = aux_sym_concatenation_token1;
	v->a[35051] = anon_sym_DOLLAR;
	v->a[35052] = anon_sym_DQUOTE;
	v->a[35053] = sym_raw_string;
	v->a[35054] = sym_number;
	v->a[35055] = anon_sym_DOLLAR_LBRACE;
	v->a[35056] = anon_sym_DOLLAR_LPAREN;
	v->a[35057] = anon_sym_BQUOTE;
	v->a[35058] = sym_word;
	v->a[35059] = anon_sym_SEMI;
	small_parse_table_1753(v);
}

void	small_parse_table_1753(t_small_parse_table_array *v)
{
	v->a[35060] = 6;
	v->a[35061] = actions(3);
	v->a[35062] = 1;
	v->a[35063] = sym_comment;
	v->a[35064] = actions(1219);
	v->a[35065] = 1;
	v->a[35066] = aux_sym_concatenation_token1;
	v->a[35067] = actions(1223);
	v->a[35068] = 1;
	v->a[35069] = sym__concat;
	v->a[35070] = state(499);
	v->a[35071] = 1;
	v->a[35072] = aux_sym_concatenation_repeat1;
	v->a[35073] = actions(1208);
	v->a[35074] = 2;
	v->a[35075] = sym_file_descriptor;
	v->a[35076] = sym_variable_name;
	v->a[35077] = actions(1210);
	v->a[35078] = 24;
	v->a[35079] = anon_sym_PIPE;
	small_parse_table_1754(v);
}

void	small_parse_table_1754(t_small_parse_table_array *v)
{
	v->a[35080] = anon_sym_SEMI_SEMI;
	v->a[35081] = anon_sym_AMP_AMP;
	v->a[35082] = anon_sym_PIPE_PIPE;
	v->a[35083] = anon_sym_LT;
	v->a[35084] = anon_sym_GT;
	v->a[35085] = anon_sym_GT_GT;
	v->a[35086] = anon_sym_LT_AMP;
	v->a[35087] = anon_sym_GT_AMP;
	v->a[35088] = anon_sym_GT_PIPE;
	v->a[35089] = anon_sym_LT_GT;
	v->a[35090] = anon_sym_LT_LT;
	v->a[35091] = anon_sym_LT_LT_DASH;
	v->a[35092] = aux_sym_heredoc_redirect_token1;
	v->a[35093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35094] = anon_sym_DOLLAR;
	v->a[35095] = anon_sym_DQUOTE;
	v->a[35096] = sym_raw_string;
	v->a[35097] = sym_number;
	v->a[35098] = anon_sym_DOLLAR_LBRACE;
	v->a[35099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1755(v);
}

/* EOF small_parse_table_350.c */
