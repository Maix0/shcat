/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_960.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4800(t_small_parse_table_array *v)
{
	v->a[96000] = actions(4078);
	v->a[96001] = 1;
	v->a[96002] = anon_sym_DQUOTE;
	v->a[96003] = state(2061);
	v->a[96004] = 1;
	v->a[96005] = aux_sym_string_repeat1;
	v->a[96006] = state(2107);
	v->a[96007] = 4;
	v->a[96008] = sym_arithmetic_expansion;
	v->a[96009] = sym_simple_expansion;
	v->a[96010] = sym_expansion;
	v->a[96011] = sym_command_substitution;
	v->a[96012] = 10;
	v->a[96013] = actions(3);
	v->a[96014] = 1;
	v->a[96015] = sym_comment;
	v->a[96016] = actions(3856);
	v->a[96017] = 1;
	v->a[96018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96019] = actions(3862);
	small_parse_table_4801(v);
}

void	small_parse_table_4801(t_small_parse_table_array *v)
{
	v->a[96020] = 1;
	v->a[96021] = sym_string_content;
	v->a[96022] = actions(3864);
	v->a[96023] = 1;
	v->a[96024] = anon_sym_DOLLAR_LBRACE;
	v->a[96025] = actions(3866);
	v->a[96026] = 1;
	v->a[96027] = anon_sym_DOLLAR_LPAREN;
	v->a[96028] = actions(3868);
	v->a[96029] = 1;
	v->a[96030] = anon_sym_BQUOTE;
	v->a[96031] = actions(4080);
	v->a[96032] = 1;
	v->a[96033] = anon_sym_DOLLAR;
	v->a[96034] = actions(4082);
	v->a[96035] = 1;
	v->a[96036] = anon_sym_DQUOTE;
	v->a[96037] = state(2001);
	v->a[96038] = 1;
	v->a[96039] = aux_sym_string_repeat1;
	small_parse_table_4802(v);
}

void	small_parse_table_4802(t_small_parse_table_array *v)
{
	v->a[96040] = state(2107);
	v->a[96041] = 4;
	v->a[96042] = sym_arithmetic_expansion;
	v->a[96043] = sym_simple_expansion;
	v->a[96044] = sym_expansion;
	v->a[96045] = sym_command_substitution;
	v->a[96046] = 6;
	v->a[96047] = actions(1094);
	v->a[96048] = 1;
	v->a[96049] = sym_comment;
	v->a[96050] = actions(4090);
	v->a[96051] = 1;
	v->a[96052] = anon_sym_LT_LT;
	v->a[96053] = actions(4092);
	v->a[96054] = 1;
	v->a[96055] = anon_sym_LT_LT_DASH;
	v->a[96056] = actions(4088);
	v->a[96057] = 2;
	v->a[96058] = anon_sym_LT_AMP_DASH;
	v->a[96059] = anon_sym_GT_AMP_DASH;
	small_parse_table_4803(v);
}

void	small_parse_table_4803(t_small_parse_table_array *v)
{
	v->a[96060] = actions(4086);
	v->a[96061] = 3;
	v->a[96062] = anon_sym_GT_GT;
	v->a[96063] = anon_sym_AMP_GT_GT;
	v->a[96064] = anon_sym_GT_PIPE;
	v->a[96065] = actions(4084);
	v->a[96066] = 5;
	v->a[96067] = anon_sym_LT;
	v->a[96068] = anon_sym_GT;
	v->a[96069] = anon_sym_AMP_GT;
	v->a[96070] = anon_sym_LT_AMP;
	v->a[96071] = anon_sym_GT_AMP;
	v->a[96072] = 4;
	v->a[96073] = actions(3);
	v->a[96074] = 1;
	v->a[96075] = sym_comment;
	v->a[96076] = actions(453);
	v->a[96077] = 1;
	v->a[96078] = sym_variable_name;
	v->a[96079] = actions(451);
	small_parse_table_4804(v);
}

void	small_parse_table_4804(t_small_parse_table_array *v)
{
	v->a[96080] = 2;
	v->a[96081] = aux_sym__simple_variable_name_token1;
	v->a[96082] = aux_sym__multiline_variable_name_token1;
	v->a[96083] = actions(449);
	v->a[96084] = 9;
	v->a[96085] = anon_sym_BANG;
	v->a[96086] = anon_sym_DASH;
	v->a[96087] = anon_sym_STAR;
	v->a[96088] = anon_sym_QMARK;
	v->a[96089] = anon_sym_DOLLAR;
	v->a[96090] = anon_sym_POUND;
	v->a[96091] = anon_sym_AT;
	v->a[96092] = anon_sym_0;
	v->a[96093] = anon_sym__;
	v->a[96094] = 4;
	v->a[96095] = actions(3);
	v->a[96096] = 1;
	v->a[96097] = sym_comment;
	v->a[96098] = actions(1137);
	v->a[96099] = 1;
	small_parse_table_4805(v);
}

/* EOF small_parse_table_960.c */
