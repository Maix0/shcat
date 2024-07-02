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
	v->a[35000] = 12;
	v->a[35001] = anon_sym_PIPE;
	v->a[35002] = anon_sym_AMP_AMP;
	v->a[35003] = anon_sym_PIPE_PIPE;
	v->a[35004] = anon_sym_LT;
	v->a[35005] = anon_sym_GT;
	v->a[35006] = anon_sym_GT_GT;
	v->a[35007] = anon_sym_LT_AMP;
	v->a[35008] = anon_sym_GT_AMP;
	v->a[35009] = anon_sym_GT_PIPE;
	v->a[35010] = anon_sym_LT_GT;
	v->a[35011] = anon_sym_LT_LT;
	v->a[35012] = anon_sym_LT_LT_DASH;
	v->a[35013] = 6;
	v->a[35014] = actions(3);
	v->a[35015] = 1;
	v->a[35016] = sym_comment;
	v->a[35017] = actions(1170);
	v->a[35018] = 1;
	v->a[35019] = aux_sym_concatenation_token1;
	small_parse_table_1751(v);
}

void	small_parse_table_1751(t_small_parse_table_array *v)
{
	v->a[35020] = actions(1207);
	v->a[35021] = 1;
	v->a[35022] = sym__concat;
	v->a[35023] = state(489);
	v->a[35024] = 1;
	v->a[35025] = aux_sym_concatenation_repeat1;
	v->a[35026] = actions(1194);
	v->a[35027] = 2;
	v->a[35028] = sym_file_descriptor;
	v->a[35029] = sym_variable_name;
	v->a[35030] = actions(1196);
	v->a[35031] = 25;
	v->a[35032] = anon_sym_PIPE;
	v->a[35033] = anon_sym_SEMI_SEMI;
	v->a[35034] = anon_sym_AMP_AMP;
	v->a[35035] = anon_sym_PIPE_PIPE;
	v->a[35036] = anon_sym_LT;
	v->a[35037] = anon_sym_GT;
	v->a[35038] = anon_sym_GT_GT;
	v->a[35039] = anon_sym_LT_AMP;
	small_parse_table_1752(v);
}

void	small_parse_table_1752(t_small_parse_table_array *v)
{
	v->a[35040] = anon_sym_GT_AMP;
	v->a[35041] = anon_sym_GT_PIPE;
	v->a[35042] = anon_sym_LT_GT;
	v->a[35043] = anon_sym_LT_LT;
	v->a[35044] = anon_sym_LT_LT_DASH;
	v->a[35045] = aux_sym_heredoc_redirect_token1;
	v->a[35046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35047] = anon_sym_AMP;
	v->a[35048] = anon_sym_DOLLAR;
	v->a[35049] = anon_sym_DQUOTE;
	v->a[35050] = sym_raw_string;
	v->a[35051] = sym_number;
	v->a[35052] = anon_sym_DOLLAR_LBRACE;
	v->a[35053] = anon_sym_DOLLAR_LPAREN;
	v->a[35054] = anon_sym_BQUOTE;
	v->a[35055] = sym_word;
	v->a[35056] = anon_sym_SEMI;
	v->a[35057] = 3;
	v->a[35058] = actions(3);
	v->a[35059] = 1;
	small_parse_table_1753(v);
}

void	small_parse_table_1753(t_small_parse_table_array *v)
{
	v->a[35060] = sym_comment;
	v->a[35061] = actions(1178);
	v->a[35062] = 4;
	v->a[35063] = sym_file_descriptor;
	v->a[35064] = sym__concat;
	v->a[35065] = sym__bare_dollar;
	v->a[35066] = ts_builtin_sym_end;
	v->a[35067] = actions(1180);
	v->a[35068] = 26;
	v->a[35069] = anon_sym_PIPE;
	v->a[35070] = anon_sym_SEMI_SEMI;
	v->a[35071] = anon_sym_AMP_AMP;
	v->a[35072] = anon_sym_PIPE_PIPE;
	v->a[35073] = anon_sym_LT;
	v->a[35074] = anon_sym_GT;
	v->a[35075] = anon_sym_GT_GT;
	v->a[35076] = anon_sym_LT_AMP;
	v->a[35077] = anon_sym_GT_AMP;
	v->a[35078] = anon_sym_GT_PIPE;
	v->a[35079] = anon_sym_LT_GT;
	small_parse_table_1754(v);
}

void	small_parse_table_1754(t_small_parse_table_array *v)
{
	v->a[35080] = anon_sym_LT_LT;
	v->a[35081] = anon_sym_LT_LT_DASH;
	v->a[35082] = aux_sym_heredoc_redirect_token1;
	v->a[35083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35084] = anon_sym_AMP;
	v->a[35085] = aux_sym_concatenation_token1;
	v->a[35086] = anon_sym_DOLLAR;
	v->a[35087] = anon_sym_DQUOTE;
	v->a[35088] = sym_raw_string;
	v->a[35089] = sym_number;
	v->a[35090] = anon_sym_DOLLAR_LBRACE;
	v->a[35091] = anon_sym_DOLLAR_LPAREN;
	v->a[35092] = anon_sym_BQUOTE;
	v->a[35093] = sym_word;
	v->a[35094] = anon_sym_SEMI;
	v->a[35095] = 3;
	v->a[35096] = actions(3);
	v->a[35097] = 1;
	v->a[35098] = sym_comment;
	v->a[35099] = actions(796);
	small_parse_table_1755(v);
}

/* EOF small_parse_table_350.c */
