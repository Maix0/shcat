/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_900.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4500(t_small_parse_table_array *v)
{
	v->a[90000] = 1;
	v->a[90001] = anon_sym_DQUOTE;
	v->a[90002] = state(1797);
	v->a[90003] = 1;
	v->a[90004] = aux_sym_string_repeat1;
	v->a[90005] = state(1869);
	v->a[90006] = 4;
	v->a[90007] = sym_arithmetic_expansion;
	v->a[90008] = sym_simple_expansion;
	v->a[90009] = sym_expansion;
	v->a[90010] = sym_command_substitution;
	v->a[90011] = 4;
	v->a[90012] = actions(3);
	v->a[90013] = 1;
	v->a[90014] = sym_comment;
	v->a[90015] = actions(3930);
	v->a[90016] = 1;
	v->a[90017] = sym_variable_name;
	v->a[90018] = actions(3928);
	v->a[90019] = 2;
	small_parse_table_4501(v);
}

void	small_parse_table_4501(t_small_parse_table_array *v)
{
	v->a[90020] = aux_sym__simple_variable_name_token1;
	v->a[90021] = aux_sym__multiline_variable_name_token1;
	v->a[90022] = actions(3926);
	v->a[90023] = 9;
	v->a[90024] = anon_sym_BANG;
	v->a[90025] = anon_sym_DASH;
	v->a[90026] = anon_sym_STAR;
	v->a[90027] = anon_sym_QMARK;
	v->a[90028] = anon_sym_DOLLAR;
	v->a[90029] = anon_sym_POUND;
	v->a[90030] = anon_sym_AT;
	v->a[90031] = anon_sym_0;
	v->a[90032] = anon_sym__;
	v->a[90033] = 6;
	v->a[90034] = actions(1404);
	v->a[90035] = 1;
	v->a[90036] = sym_comment;
	v->a[90037] = actions(3752);
	v->a[90038] = 1;
	v->a[90039] = anon_sym_LT_LT;
	small_parse_table_4502(v);
}

void	small_parse_table_4502(t_small_parse_table_array *v)
{
	v->a[90040] = actions(3754);
	v->a[90041] = 1;
	v->a[90042] = anon_sym_LT_LT_DASH;
	v->a[90043] = actions(3936);
	v->a[90044] = 2;
	v->a[90045] = anon_sym_LT_AMP_DASH;
	v->a[90046] = anon_sym_GT_AMP_DASH;
	v->a[90047] = actions(3934);
	v->a[90048] = 3;
	v->a[90049] = anon_sym_GT_GT;
	v->a[90050] = anon_sym_AMP_GT_GT;
	v->a[90051] = anon_sym_GT_PIPE;
	v->a[90052] = actions(3932);
	v->a[90053] = 5;
	v->a[90054] = anon_sym_LT;
	v->a[90055] = anon_sym_GT;
	v->a[90056] = anon_sym_AMP_GT;
	v->a[90057] = anon_sym_LT_AMP;
	v->a[90058] = anon_sym_GT_AMP;
	v->a[90059] = 4;
	small_parse_table_4503(v);
}

void	small_parse_table_4503(t_small_parse_table_array *v)
{
	v->a[90060] = actions(3);
	v->a[90061] = 1;
	v->a[90062] = sym_comment;
	v->a[90063] = actions(415);
	v->a[90064] = 1;
	v->a[90065] = sym_variable_name;
	v->a[90066] = actions(411);
	v->a[90067] = 2;
	v->a[90068] = aux_sym__simple_variable_name_token1;
	v->a[90069] = aux_sym__multiline_variable_name_token1;
	v->a[90070] = actions(409);
	v->a[90071] = 9;
	v->a[90072] = anon_sym_BANG;
	v->a[90073] = anon_sym_DASH;
	v->a[90074] = anon_sym_STAR;
	v->a[90075] = anon_sym_QMARK;
	v->a[90076] = anon_sym_DOLLAR;
	v->a[90077] = anon_sym_POUND;
	v->a[90078] = anon_sym_AT;
	v->a[90079] = anon_sym_0;
	small_parse_table_4504(v);
}

void	small_parse_table_4504(t_small_parse_table_array *v)
{
	v->a[90080] = anon_sym__;
	v->a[90081] = 10;
	v->a[90082] = actions(3);
	v->a[90083] = 1;
	v->a[90084] = sym_comment;
	v->a[90085] = actions(3712);
	v->a[90086] = 1;
	v->a[90087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90088] = actions(3716);
	v->a[90089] = 1;
	v->a[90090] = sym_string_content;
	v->a[90091] = actions(3718);
	v->a[90092] = 1;
	v->a[90093] = anon_sym_DOLLAR_LBRACE;
	v->a[90094] = actions(3720);
	v->a[90095] = 1;
	v->a[90096] = anon_sym_DOLLAR_LPAREN;
	v->a[90097] = actions(3722);
	v->a[90098] = 1;
	v->a[90099] = anon_sym_BQUOTE;
	small_parse_table_4505(v);
}

/* EOF small_parse_table_900.c */
