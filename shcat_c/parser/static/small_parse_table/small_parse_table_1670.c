/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1670.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8350(t_small_parse_table_array *v)
{
	v->a[167000] = 1;
	v->a[167001] = sym_string;
	v->a[167002] = actions(7442);
	v->a[167003] = 2;
	v->a[167004] = aux_sym__simple_variable_name_token1;
	v->a[167005] = aux_sym__multiline_variable_name_token1;
	v->a[167006] = actions(7440);
	v->a[167007] = 9;
	v->a[167008] = anon_sym_DASH;
	v->a[167009] = anon_sym_STAR;
	v->a[167010] = anon_sym_BANG;
	v->a[167011] = anon_sym_QMARK;
	v->a[167012] = anon_sym_DOLLAR;
	v->a[167013] = anon_sym_POUND;
	v->a[167014] = anon_sym_AT2;
	v->a[167015] = anon_sym_0;
	v->a[167016] = anon_sym__;
	v->a[167017] = actions(1227);
	v->a[167018] = 22;
	v->a[167019] = anon_sym_SEMI;
	small_parse_table_8351(v);
}

void	small_parse_table_8351(t_small_parse_table_array *v)
{
	v->a[167020] = anon_sym_PIPE_PIPE;
	v->a[167021] = anon_sym_AMP_AMP;
	v->a[167022] = anon_sym_PIPE;
	v->a[167023] = anon_sym_AMP;
	v->a[167024] = anon_sym_LT;
	v->a[167025] = anon_sym_GT;
	v->a[167026] = anon_sym_LT_LT;
	v->a[167027] = anon_sym_GT_GT;
	v->a[167028] = anon_sym_RPAREN;
	v->a[167029] = anon_sym_SEMI_SEMI;
	v->a[167030] = anon_sym_PIPE_AMP;
	v->a[167031] = anon_sym_AMP_GT;
	v->a[167032] = anon_sym_AMP_GT_GT;
	v->a[167033] = anon_sym_LT_AMP;
	v->a[167034] = anon_sym_GT_AMP;
	v->a[167035] = anon_sym_GT_PIPE;
	v->a[167036] = anon_sym_LT_AMP_DASH;
	v->a[167037] = anon_sym_GT_AMP_DASH;
	v->a[167038] = anon_sym_LT_LT_DASH;
	v->a[167039] = aux_sym_heredoc_redirect_token1;
	small_parse_table_8352(v);
}

void	small_parse_table_8352(t_small_parse_table_array *v)
{
	v->a[167040] = anon_sym_LT_LT_LT;
	v->a[167041] = 25;
	v->a[167042] = actions(71);
	v->a[167043] = 1;
	v->a[167044] = sym_comment;
	v->a[167045] = actions(6474);
	v->a[167046] = 1;
	v->a[167047] = sym_word;
	v->a[167048] = actions(6480);
	v->a[167049] = 1;
	v->a[167050] = anon_sym_LPAREN;
	v->a[167051] = actions(6488);
	v->a[167052] = 1;
	v->a[167053] = anon_sym_DOLLAR;
	v->a[167054] = actions(6494);
	v->a[167055] = 1;
	v->a[167056] = aux_sym_number_token1;
	v->a[167057] = actions(6496);
	v->a[167058] = 1;
	v->a[167059] = aux_sym_number_token2;
	small_parse_table_8353(v);
}

void	small_parse_table_8353(t_small_parse_table_array *v)
{
	v->a[167060] = actions(6500);
	v->a[167061] = 1;
	v->a[167062] = anon_sym_DOLLAR_LPAREN;
	v->a[167063] = actions(6508);
	v->a[167064] = 1;
	v->a[167065] = sym_test_operator;
	v->a[167066] = actions(6510);
	v->a[167067] = 1;
	v->a[167068] = sym_extglob_pattern;
	v->a[167069] = actions(6512);
	v->a[167070] = 1;
	v->a[167071] = sym__brace_start;
	v->a[167072] = actions(6641);
	v->a[167073] = 1;
	v->a[167074] = anon_sym_esac;
	v->a[167075] = actions(7226);
	v->a[167076] = 1;
	v->a[167077] = anon_sym_DOLLAR_LBRACK;
	v->a[167078] = actions(7228);
	v->a[167079] = 1;
	small_parse_table_8354(v);
}

void	small_parse_table_8354(t_small_parse_table_array *v)
{
	v->a[167080] = sym__special_character;
	v->a[167081] = actions(7230);
	v->a[167082] = 1;
	v->a[167083] = anon_sym_DQUOTE;
	v->a[167084] = actions(7234);
	v->a[167085] = 1;
	v->a[167086] = anon_sym_DOLLAR_LBRACE;
	v->a[167087] = actions(7236);
	v->a[167088] = 1;
	v->a[167089] = anon_sym_BQUOTE;
	v->a[167090] = actions(7238);
	v->a[167091] = 1;
	v->a[167092] = anon_sym_DOLLAR_BQUOTE;
	v->a[167093] = state(6426);
	v->a[167094] = 1;
	v->a[167095] = aux_sym__literal_repeat1;
	v->a[167096] = state(7528);
	v->a[167097] = 1;
	v->a[167098] = sym_last_case_item;
	v->a[167099] = actions(7224);
	small_parse_table_8355(v);
}

/* EOF small_parse_table_1670.c */
