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
	v->a[35000] = anon_sym_for;
	v->a[35001] = anon_sym_while;
	v->a[35002] = anon_sym_until;
	v->a[35003] = anon_sym_if;
	v->a[35004] = anon_sym_case;
	v->a[35005] = anon_sym_LPAREN;
	v->a[35006] = anon_sym_LBRACE;
	v->a[35007] = anon_sym_BANG;
	v->a[35008] = anon_sym_LT;
	v->a[35009] = anon_sym_GT;
	v->a[35010] = anon_sym_GT_GT;
	v->a[35011] = anon_sym_LT_AMP;
	v->a[35012] = anon_sym_GT_AMP;
	v->a[35013] = anon_sym_GT_PIPE;
	v->a[35014] = anon_sym_LT_GT;
	v->a[35015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35016] = anon_sym_DOLLAR;
	v->a[35017] = anon_sym_DQUOTE;
	v->a[35018] = sym_raw_string;
	v->a[35019] = sym_number;
	small_parse_table_1751(v);
}

void	small_parse_table_1751(t_small_parse_table_array *v)
{
	v->a[35020] = anon_sym_DOLLAR_LBRACE;
	v->a[35021] = anon_sym_DOLLAR_LPAREN;
	v->a[35022] = anon_sym_BQUOTE;
	v->a[35023] = sym_word;
	v->a[35024] = 6;
	v->a[35025] = actions(3);
	v->a[35026] = 1;
	v->a[35027] = sym_comment;
	v->a[35028] = actions(1283);
	v->a[35029] = 1;
	v->a[35030] = anon_sym_RPAREN;
	v->a[35031] = actions(1289);
	v->a[35032] = 1;
	v->a[35033] = sym_variable_name;
	v->a[35034] = actions(1286);
	v->a[35035] = 7;
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
	v->a[35043] = actions(1281);
	v->a[35044] = 8;
	v->a[35045] = anon_sym_PIPE;
	v->a[35046] = anon_sym_SEMI_SEMI;
	v->a[35047] = anon_sym_AMP_AMP;
	v->a[35048] = anon_sym_PIPE_PIPE;
	v->a[35049] = anon_sym_LT_LT;
	v->a[35050] = anon_sym_LT_LT_DASH;
	v->a[35051] = aux_sym_heredoc_redirect_token1;
	v->a[35052] = anon_sym_SEMI;
	v->a[35053] = actions(1279);
	v->a[35054] = 9;
	v->a[35055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35056] = anon_sym_DOLLAR;
	v->a[35057] = anon_sym_DQUOTE;
	v->a[35058] = sym_raw_string;
	v->a[35059] = sym_number;
	small_parse_table_1753(v);
}

void	small_parse_table_1753(t_small_parse_table_array *v)
{
	v->a[35060] = anon_sym_DOLLAR_LBRACE;
	v->a[35061] = anon_sym_DOLLAR_LPAREN;
	v->a[35062] = anon_sym_BQUOTE;
	v->a[35063] = sym_word;
	v->a[35064] = 6;
	v->a[35065] = actions(3);
	v->a[35066] = 1;
	v->a[35067] = sym_comment;
	v->a[35068] = actions(1289);
	v->a[35069] = 1;
	v->a[35070] = sym_variable_name;
	v->a[35071] = actions(1291);
	v->a[35072] = 1;
	v->a[35073] = anon_sym_RPAREN;
	v->a[35074] = actions(1286);
	v->a[35075] = 7;
	v->a[35076] = anon_sym_LT;
	v->a[35077] = anon_sym_GT;
	v->a[35078] = anon_sym_GT_GT;
	v->a[35079] = anon_sym_LT_AMP;
	small_parse_table_1754(v);
}

void	small_parse_table_1754(t_small_parse_table_array *v)
{
	v->a[35080] = anon_sym_GT_AMP;
	v->a[35081] = anon_sym_GT_PIPE;
	v->a[35082] = anon_sym_LT_GT;
	v->a[35083] = actions(1281);
	v->a[35084] = 8;
	v->a[35085] = anon_sym_PIPE;
	v->a[35086] = anon_sym_SEMI_SEMI;
	v->a[35087] = anon_sym_AMP_AMP;
	v->a[35088] = anon_sym_PIPE_PIPE;
	v->a[35089] = anon_sym_LT_LT;
	v->a[35090] = anon_sym_LT_LT_DASH;
	v->a[35091] = aux_sym_heredoc_redirect_token1;
	v->a[35092] = anon_sym_SEMI;
	v->a[35093] = actions(1279);
	v->a[35094] = 9;
	v->a[35095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35096] = anon_sym_DOLLAR;
	v->a[35097] = anon_sym_DQUOTE;
	v->a[35098] = sym_raw_string;
	v->a[35099] = sym_number;
	small_parse_table_1755(v);
}

/* EOF small_parse_table_350.c */
