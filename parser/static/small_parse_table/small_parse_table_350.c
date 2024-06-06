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
	v->a[35000] = anon_sym_DOLLAR_BQUOTE;
	v->a[35001] = sym_word;
	v->a[35002] = anon_sym_SEMI;
	v->a[35003] = 5;
	v->a[35004] = actions(3);
	v->a[35005] = 1;
	v->a[35006] = sym_comment;
	v->a[35007] = actions(3460);
	v->a[35008] = 1;
	v->a[35009] = sym__special_character;
	v->a[35010] = state(799);
	v->a[35011] = 1;
	v->a[35012] = aux_sym__literal_repeat1;
	v->a[35013] = actions(3197);
	v->a[35014] = 5;
	v->a[35015] = sym_file_descriptor;
	v->a[35016] = sym_variable_name;
	v->a[35017] = sym_test_operator;
	v->a[35018] = sym__brace_start;
	v->a[35019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1751(v);
}

void	small_parse_table_1751(t_small_parse_table_array *v)
{
	v->a[35020] = actions(3195);
	v->a[35021] = 33;
	v->a[35022] = anon_sym_PIPE;
	v->a[35023] = anon_sym_SEMI_SEMI;
	v->a[35024] = anon_sym_SEMI_AMP;
	v->a[35025] = anon_sym_SEMI_SEMI_AMP;
	v->a[35026] = anon_sym_PIPE_AMP;
	v->a[35027] = anon_sym_AMP_AMP;
	v->a[35028] = anon_sym_PIPE_PIPE;
	v->a[35029] = anon_sym_LT;
	v->a[35030] = anon_sym_GT;
	v->a[35031] = anon_sym_GT_GT;
	v->a[35032] = anon_sym_AMP_GT;
	v->a[35033] = anon_sym_AMP_GT_GT;
	v->a[35034] = anon_sym_LT_AMP;
	v->a[35035] = anon_sym_GT_AMP;
	v->a[35036] = anon_sym_GT_PIPE;
	v->a[35037] = anon_sym_LT_AMP_DASH;
	v->a[35038] = anon_sym_GT_AMP_DASH;
	v->a[35039] = anon_sym_LT_LT;
	small_parse_table_1752(v);
}

void	small_parse_table_1752(t_small_parse_table_array *v)
{
	v->a[35040] = anon_sym_LT_LT_DASH;
	v->a[35041] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35042] = anon_sym_AMP;
	v->a[35043] = anon_sym_DOLLAR;
	v->a[35044] = anon_sym_DQUOTE;
	v->a[35045] = sym_raw_string;
	v->a[35046] = aux_sym_number_token1;
	v->a[35047] = aux_sym_number_token2;
	v->a[35048] = anon_sym_DOLLAR_LBRACE;
	v->a[35049] = anon_sym_DOLLAR_LPAREN;
	v->a[35050] = anon_sym_BQUOTE;
	v->a[35051] = anon_sym_DOLLAR_BQUOTE;
	v->a[35052] = aux_sym__simple_variable_name_token1;
	v->a[35053] = sym_word;
	v->a[35054] = anon_sym_SEMI;
	v->a[35055] = 6;
	v->a[35056] = actions(3);
	v->a[35057] = 1;
	v->a[35058] = sym_comment;
	v->a[35059] = actions(3427);
	small_parse_table_1753(v);
}

void	small_parse_table_1753(t_small_parse_table_array *v)
{
	v->a[35060] = 1;
	v->a[35061] = aux_sym_concatenation_token1;
	v->a[35062] = actions(3463);
	v->a[35063] = 1;
	v->a[35064] = sym__concat;
	v->a[35065] = state(801);
	v->a[35066] = 1;
	v->a[35067] = aux_sym_concatenation_repeat1;
	v->a[35068] = actions(2690);
	v->a[35069] = 5;
	v->a[35070] = sym_file_descriptor;
	v->a[35071] = sym_test_operator;
	v->a[35072] = sym__bare_dollar;
	v->a[35073] = sym__brace_start;
	v->a[35074] = aux_sym_heredoc_redirect_token1;
	v->a[35075] = actions(2688);
	v->a[35076] = 32;
	v->a[35077] = anon_sym_PIPE;
	v->a[35078] = anon_sym_RPAREN;
	v->a[35079] = anon_sym_SEMI_SEMI;
	small_parse_table_1754(v);
}

void	small_parse_table_1754(t_small_parse_table_array *v)
{
	v->a[35080] = anon_sym_PIPE_AMP;
	v->a[35081] = anon_sym_AMP_AMP;
	v->a[35082] = anon_sym_PIPE_PIPE;
	v->a[35083] = anon_sym_LT;
	v->a[35084] = anon_sym_GT;
	v->a[35085] = anon_sym_GT_GT;
	v->a[35086] = anon_sym_AMP_GT;
	v->a[35087] = anon_sym_AMP_GT_GT;
	v->a[35088] = anon_sym_LT_AMP;
	v->a[35089] = anon_sym_GT_AMP;
	v->a[35090] = anon_sym_GT_PIPE;
	v->a[35091] = anon_sym_LT_AMP_DASH;
	v->a[35092] = anon_sym_GT_AMP_DASH;
	v->a[35093] = anon_sym_LT_LT;
	v->a[35094] = anon_sym_LT_LT_DASH;
	v->a[35095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35096] = anon_sym_AMP;
	v->a[35097] = anon_sym_DOLLAR;
	v->a[35098] = sym__special_character;
	v->a[35099] = anon_sym_DQUOTE;
	small_parse_table_1755(v);
}

/* EOF small_parse_table_350.c */
