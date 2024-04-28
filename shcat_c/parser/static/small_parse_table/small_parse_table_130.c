/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_130.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_650(t_small_parse_table_array *v)
{
	v->a[13000] = 1;
	v->a[13001] = sym_string;
	v->a[13002] = actions(3123);
	v->a[13003] = 2;
	v->a[13004] = aux_sym__simple_variable_name_token1;
	v->a[13005] = aux_sym__multiline_variable_name_token1;
	v->a[13006] = actions(1235);
	v->a[13007] = 3;
	v->a[13008] = sym_file_descriptor;
	v->a[13009] = sym_test_operator;
	v->a[13010] = sym__brace_start;
	v->a[13011] = actions(3121);
	v->a[13012] = 9;
	v->a[13013] = anon_sym_DASH;
	v->a[13014] = anon_sym_STAR;
	v->a[13015] = anon_sym_BANG;
	v->a[13016] = anon_sym_QMARK;
	v->a[13017] = anon_sym_DOLLAR;
	v->a[13018] = anon_sym_POUND;
	v->a[13019] = anon_sym_AT2;
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = anon_sym_0;
	v->a[13021] = anon_sym__;
	v->a[13022] = actions(1227);
	v->a[13023] = 37;
	v->a[13024] = anon_sym_LPAREN_LPAREN;
	v->a[13025] = anon_sym_SEMI;
	v->a[13026] = anon_sym_PIPE_PIPE;
	v->a[13027] = anon_sym_AMP_AMP;
	v->a[13028] = anon_sym_PIPE;
	v->a[13029] = anon_sym_AMP;
	v->a[13030] = anon_sym_LT;
	v->a[13031] = anon_sym_GT;
	v->a[13032] = anon_sym_LT_LT;
	v->a[13033] = anon_sym_GT_GT;
	v->a[13034] = anon_sym_SEMI_SEMI;
	v->a[13035] = anon_sym_SEMI_AMP;
	v->a[13036] = anon_sym_SEMI_SEMI_AMP;
	v->a[13037] = anon_sym_PIPE_AMP;
	v->a[13038] = anon_sym_AMP_GT;
	v->a[13039] = anon_sym_AMP_GT_GT;
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = anon_sym_LT_AMP;
	v->a[13041] = anon_sym_GT_AMP;
	v->a[13042] = anon_sym_GT_PIPE;
	v->a[13043] = anon_sym_LT_AMP_DASH;
	v->a[13044] = anon_sym_GT_AMP_DASH;
	v->a[13045] = anon_sym_LT_LT_DASH;
	v->a[13046] = aux_sym_heredoc_redirect_token1;
	v->a[13047] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13048] = anon_sym_DOLLAR_LBRACK;
	v->a[13049] = sym__special_character;
	v->a[13050] = sym_raw_string;
	v->a[13051] = sym_ansi_c_string;
	v->a[13052] = aux_sym_number_token1;
	v->a[13053] = aux_sym_number_token2;
	v->a[13054] = anon_sym_DOLLAR_LBRACE;
	v->a[13055] = anon_sym_DOLLAR_LPAREN;
	v->a[13056] = anon_sym_BQUOTE;
	v->a[13057] = anon_sym_DOLLAR_BQUOTE;
	v->a[13058] = anon_sym_LT_LPAREN;
	v->a[13059] = anon_sym_GT_LPAREN;
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = sym_word;
	v->a[13061] = 22;
	v->a[13062] = actions(3);
	v->a[13063] = 1;
	v->a[13064] = sym_comment;
	v->a[13065] = actions(3133);
	v->a[13066] = 1;
	v->a[13067] = anon_sym_DOLLAR_LBRACK;
	v->a[13068] = actions(3136);
	v->a[13069] = 1;
	v->a[13070] = anon_sym_DOLLAR;
	v->a[13071] = actions(3139);
	v->a[13072] = 1;
	v->a[13073] = sym__special_character;
	v->a[13074] = actions(3142);
	v->a[13075] = 1;
	v->a[13076] = anon_sym_DQUOTE;
	v->a[13077] = actions(3145);
	v->a[13078] = 1;
	v->a[13079] = aux_sym_number_token1;
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = actions(3148);
	v->a[13081] = 1;
	v->a[13082] = aux_sym_number_token2;
	v->a[13083] = actions(3151);
	v->a[13084] = 1;
	v->a[13085] = anon_sym_DOLLAR_LBRACE;
	v->a[13086] = actions(3154);
	v->a[13087] = 1;
	v->a[13088] = anon_sym_DOLLAR_LPAREN;
	v->a[13089] = actions(3157);
	v->a[13090] = 1;
	v->a[13091] = anon_sym_BQUOTE;
	v->a[13092] = actions(3160);
	v->a[13093] = 1;
	v->a[13094] = anon_sym_DOLLAR_BQUOTE;
	v->a[13095] = actions(3166);
	v->a[13096] = 1;
	v->a[13097] = aux_sym__simple_variable_name_token1;
	v->a[13098] = actions(3169);
	v->a[13099] = 1;
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
