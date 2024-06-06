/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_260.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1300(t_small_parse_table_array *v)
{
	v->a[26000] = anon_sym_DOLLAR;
	v->a[26001] = sym__special_character;
	v->a[26002] = anon_sym_DQUOTE;
	v->a[26003] = sym_raw_string;
	v->a[26004] = aux_sym_number_token1;
	v->a[26005] = aux_sym_number_token2;
	v->a[26006] = anon_sym_DOLLAR_LBRACE;
	v->a[26007] = anon_sym_DOLLAR_LPAREN;
	v->a[26008] = anon_sym_BQUOTE;
	v->a[26009] = anon_sym_DOLLAR_BQUOTE;
	v->a[26010] = aux_sym__simple_variable_name_token1;
	v->a[26011] = sym_word;
	v->a[26012] = anon_sym_SEMI;
	v->a[26013] = 3;
	v->a[26014] = actions(3);
	v->a[26015] = 1;
	v->a[26016] = sym_comment;
	v->a[26017] = actions(3020);
	v->a[26018] = 6;
	v->a[26019] = sym_file_descriptor;
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = sym__concat;
	v->a[26021] = sym_variable_name;
	v->a[26022] = sym_test_operator;
	v->a[26023] = sym__brace_start;
	v->a[26024] = aux_sym_heredoc_redirect_token1;
	v->a[26025] = actions(3018);
	v->a[26026] = 35;
	v->a[26027] = anon_sym_esac;
	v->a[26028] = anon_sym_PIPE;
	v->a[26029] = anon_sym_SEMI_SEMI;
	v->a[26030] = anon_sym_SEMI_AMP;
	v->a[26031] = anon_sym_SEMI_SEMI_AMP;
	v->a[26032] = anon_sym_PIPE_AMP;
	v->a[26033] = anon_sym_AMP_AMP;
	v->a[26034] = anon_sym_PIPE_PIPE;
	v->a[26035] = anon_sym_LT;
	v->a[26036] = anon_sym_GT;
	v->a[26037] = anon_sym_GT_GT;
	v->a[26038] = anon_sym_AMP_GT;
	v->a[26039] = anon_sym_AMP_GT_GT;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = anon_sym_LT_AMP;
	v->a[26041] = anon_sym_GT_AMP;
	v->a[26042] = anon_sym_GT_PIPE;
	v->a[26043] = anon_sym_LT_AMP_DASH;
	v->a[26044] = anon_sym_GT_AMP_DASH;
	v->a[26045] = anon_sym_LT_LT;
	v->a[26046] = anon_sym_LT_LT_DASH;
	v->a[26047] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26048] = anon_sym_AMP;
	v->a[26049] = aux_sym_concatenation_token1;
	v->a[26050] = anon_sym_DOLLAR;
	v->a[26051] = sym__special_character;
	v->a[26052] = anon_sym_DQUOTE;
	v->a[26053] = sym_raw_string;
	v->a[26054] = aux_sym_number_token1;
	v->a[26055] = aux_sym_number_token2;
	v->a[26056] = anon_sym_DOLLAR_LBRACE;
	v->a[26057] = anon_sym_DOLLAR_LPAREN;
	v->a[26058] = anon_sym_BQUOTE;
	v->a[26059] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = sym_word;
	v->a[26061] = anon_sym_SEMI;
	v->a[26062] = 19;
	v->a[26063] = actions(57);
	v->a[26064] = 1;
	v->a[26065] = sym_comment;
	v->a[26066] = actions(3202);
	v->a[26067] = 1;
	v->a[26068] = sym_word;
	v->a[26069] = actions(3205);
	v->a[26070] = 1;
	v->a[26071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26072] = actions(3208);
	v->a[26073] = 1;
	v->a[26074] = anon_sym_DOLLAR;
	v->a[26075] = actions(3211);
	v->a[26076] = 1;
	v->a[26077] = sym__special_character;
	v->a[26078] = actions(3214);
	v->a[26079] = 1;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = anon_sym_DQUOTE;
	v->a[26081] = actions(3220);
	v->a[26082] = 1;
	v->a[26083] = aux_sym_number_token1;
	v->a[26084] = actions(3223);
	v->a[26085] = 1;
	v->a[26086] = aux_sym_number_token2;
	v->a[26087] = actions(3226);
	v->a[26088] = 1;
	v->a[26089] = anon_sym_DOLLAR_LBRACE;
	v->a[26090] = actions(3229);
	v->a[26091] = 1;
	v->a[26092] = anon_sym_DOLLAR_LPAREN;
	v->a[26093] = actions(3232);
	v->a[26094] = 1;
	v->a[26095] = anon_sym_BQUOTE;
	v->a[26096] = actions(3235);
	v->a[26097] = 1;
	v->a[26098] = anon_sym_DOLLAR_BQUOTE;
	v->a[26099] = actions(3238);
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
