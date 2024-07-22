/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_660.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3300(t_small_parse_table_array *v)
{
	v->a[66000] = sym_word;
	v->a[66001] = state(544);
	v->a[66002] = 5;
	v->a[66003] = sym_arithmetic_expansion;
	v->a[66004] = sym_string;
	v->a[66005] = sym_simple_expansion;
	v->a[66006] = sym_expansion;
	v->a[66007] = sym_command_substitution;
	v->a[66008] = 10;
	v->a[66009] = actions(3);
	v->a[66010] = 1;
	v->a[66011] = sym_comment;
	v->a[66012] = actions(2536);
	v->a[66013] = 1;
	v->a[66014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66015] = actions(2538);
	v->a[66016] = 1;
	v->a[66017] = anon_sym_DOLLAR;
	v->a[66018] = actions(2540);
	v->a[66019] = 1;
	small_parse_table_3301(v);
}

void	small_parse_table_3301(t_small_parse_table_array *v)
{
	v->a[66020] = anon_sym_DQUOTE;
	v->a[66021] = actions(2542);
	v->a[66022] = 1;
	v->a[66023] = anon_sym_DOLLAR_LBRACE;
	v->a[66024] = actions(2544);
	v->a[66025] = 1;
	v->a[66026] = anon_sym_DOLLAR_LPAREN;
	v->a[66027] = actions(2546);
	v->a[66028] = 1;
	v->a[66029] = anon_sym_BQUOTE;
	v->a[66030] = actions(2595);
	v->a[66031] = 1;
	v->a[66032] = sym__bare_dollar;
	v->a[66033] = actions(2591);
	v->a[66034] = 5;
	v->a[66035] = aux_sym_concatenation_token1;
	v->a[66036] = sym_raw_string;
	v->a[66037] = sym_number;
	v->a[66038] = sym__comment_word;
	v->a[66039] = sym_word;
	small_parse_table_3302(v);
}

void	small_parse_table_3302(t_small_parse_table_array *v)
{
	v->a[66040] = state(1064);
	v->a[66041] = 5;
	v->a[66042] = sym_arithmetic_expansion;
	v->a[66043] = sym_string;
	v->a[66044] = sym_simple_expansion;
	v->a[66045] = sym_expansion;
	v->a[66046] = sym_command_substitution;
	v->a[66047] = 3;
	v->a[66048] = actions(3);
	v->a[66049] = 1;
	v->a[66050] = sym_comment;
	v->a[66051] = actions(2231);
	v->a[66052] = 2;
	v->a[66053] = sym_file_descriptor;
	v->a[66054] = aux_sym_heredoc_redirect_token1;
	v->a[66055] = actions(2233);
	v->a[66056] = 15;
	v->a[66057] = anon_sym_esac;
	v->a[66058] = anon_sym_PIPE;
	v->a[66059] = anon_sym_SEMI_SEMI;
	small_parse_table_3303(v);
}

void	small_parse_table_3303(t_small_parse_table_array *v)
{
	v->a[66060] = anon_sym_AMP_AMP;
	v->a[66061] = anon_sym_PIPE_PIPE;
	v->a[66062] = anon_sym_LT;
	v->a[66063] = anon_sym_GT;
	v->a[66064] = anon_sym_GT_GT;
	v->a[66065] = anon_sym_LT_AMP;
	v->a[66066] = anon_sym_GT_AMP;
	v->a[66067] = anon_sym_GT_PIPE;
	v->a[66068] = anon_sym_LT_GT;
	v->a[66069] = anon_sym_LT_LT;
	v->a[66070] = anon_sym_LT_LT_DASH;
	v->a[66071] = anon_sym_SEMI;
	v->a[66072] = 12;
	v->a[66073] = actions(3);
	v->a[66074] = 1;
	v->a[66075] = sym_comment;
	v->a[66076] = actions(2520);
	v->a[66077] = 1;
	v->a[66078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66079] = actions(2522);
	small_parse_table_3304(v);
}

void	small_parse_table_3304(t_small_parse_table_array *v)
{
	v->a[66080] = 1;
	v->a[66081] = anon_sym_DOLLAR;
	v->a[66082] = actions(2524);
	v->a[66083] = 1;
	v->a[66084] = anon_sym_DQUOTE;
	v->a[66085] = actions(2526);
	v->a[66086] = 1;
	v->a[66087] = anon_sym_DOLLAR_LBRACE;
	v->a[66088] = actions(2528);
	v->a[66089] = 1;
	v->a[66090] = anon_sym_DOLLAR_LPAREN;
	v->a[66091] = actions(2530);
	v->a[66092] = 1;
	v->a[66093] = anon_sym_BQUOTE;
	v->a[66094] = actions(2627);
	v->a[66095] = 1;
	v->a[66096] = sym__comment_word;
	v->a[66097] = actions(2629);
	v->a[66098] = 1;
	v->a[66099] = sym__empty_value;
	small_parse_table_3305(v);
}

/* EOF small_parse_table_660.c */
