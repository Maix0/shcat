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
	v->a[26000] = anon_sym_GT;
	v->a[26001] = anon_sym_GT_GT;
	v->a[26002] = anon_sym_LT_AMP;
	v->a[26003] = anon_sym_GT_AMP;
	v->a[26004] = anon_sym_GT_PIPE;
	v->a[26005] = anon_sym_LT_GT;
	v->a[26006] = anon_sym_LT_LT;
	v->a[26007] = anon_sym_LT_LT_DASH;
	v->a[26008] = aux_sym_heredoc_redirect_token1;
	v->a[26009] = 13;
	v->a[26010] = actions(3);
	v->a[26011] = 1;
	v->a[26012] = sym_comment;
	v->a[26013] = actions(53);
	v->a[26014] = 1;
	v->a[26015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26016] = actions(55);
	v->a[26017] = 1;
	v->a[26018] = anon_sym_DOLLAR;
	v->a[26019] = actions(57);
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = 1;
	v->a[26021] = anon_sym_DQUOTE;
	v->a[26022] = actions(61);
	v->a[26023] = 1;
	v->a[26024] = anon_sym_DOLLAR_LBRACE;
	v->a[26025] = actions(63);
	v->a[26026] = 1;
	v->a[26027] = anon_sym_DOLLAR_LPAREN;
	v->a[26028] = actions(65);
	v->a[26029] = 1;
	v->a[26030] = anon_sym_BQUOTE;
	v->a[26031] = actions(535);
	v->a[26032] = 1;
	v->a[26033] = sym__bare_dollar;
	v->a[26034] = state(311);
	v->a[26035] = 1;
	v->a[26036] = aux_sym_command_repeat2;
	v->a[26037] = state(614);
	v->a[26038] = 1;
	v->a[26039] = sym_concatenation;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = actions(983);
	v->a[26041] = 3;
	v->a[26042] = sym_raw_string;
	v->a[26043] = sym_number;
	v->a[26044] = sym_word;
	v->a[26045] = state(570);
	v->a[26046] = 5;
	v->a[26047] = sym_arithmetic_expansion;
	v->a[26048] = sym_string;
	v->a[26049] = sym_simple_expansion;
	v->a[26050] = sym_expansion;
	v->a[26051] = sym_command_substitution;
	v->a[26052] = actions(537);
	v->a[26053] = 13;
	v->a[26054] = anon_sym_PIPE;
	v->a[26055] = anon_sym_AMP_AMP;
	v->a[26056] = anon_sym_PIPE_PIPE;
	v->a[26057] = anon_sym_LT;
	v->a[26058] = anon_sym_GT;
	v->a[26059] = anon_sym_GT_GT;
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = anon_sym_LT_AMP;
	v->a[26061] = anon_sym_GT_AMP;
	v->a[26062] = anon_sym_GT_PIPE;
	v->a[26063] = anon_sym_LT_GT;
	v->a[26064] = anon_sym_LT_LT;
	v->a[26065] = anon_sym_LT_LT_DASH;
	v->a[26066] = aux_sym_heredoc_redirect_token1;
	v->a[26067] = 19;
	v->a[26068] = actions(3);
	v->a[26069] = 1;
	v->a[26070] = sym_comment;
	v->a[26071] = actions(17);
	v->a[26072] = 1;
	v->a[26073] = anon_sym_LPAREN;
	v->a[26074] = actions(53);
	v->a[26075] = 1;
	v->a[26076] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26077] = actions(55);
	v->a[26078] = 1;
	v->a[26079] = anon_sym_DOLLAR;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = actions(57);
	v->a[26081] = 1;
	v->a[26082] = anon_sym_DQUOTE;
	v->a[26083] = actions(61);
	v->a[26084] = 1;
	v->a[26085] = anon_sym_DOLLAR_LBRACE;
	v->a[26086] = actions(63);
	v->a[26087] = 1;
	v->a[26088] = anon_sym_DOLLAR_LPAREN;
	v->a[26089] = actions(65);
	v->a[26090] = 1;
	v->a[26091] = anon_sym_BQUOTE;
	v->a[26092] = actions(67);
	v->a[26093] = 1;
	v->a[26094] = sym_variable_name;
	v->a[26095] = state(272);
	v->a[26096] = 1;
	v->a[26097] = sym_command_name;
	v->a[26098] = state(486);
	v->a[26099] = 1;
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
