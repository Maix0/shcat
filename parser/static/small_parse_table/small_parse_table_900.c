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
	v->a[90000] = aux_sym_expansion_regex_repeat1;
	v->a[90001] = 3;
	v->a[90002] = actions(3);
	v->a[90003] = 1;
	v->a[90004] = sym_comment;
	v->a[90005] = actions(1041);
	v->a[90006] = 1;
	v->a[90007] = sym__concat;
	v->a[90008] = actions(1039);
	v->a[90009] = 7;
	v->a[90010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90011] = anon_sym_DOLLAR;
	v->a[90012] = anon_sym_DQUOTE;
	v->a[90013] = sym_string_content;
	v->a[90014] = anon_sym_DOLLAR_LBRACE;
	v->a[90015] = anon_sym_DOLLAR_LPAREN;
	v->a[90016] = anon_sym_BQUOTE;
	v->a[90017] = 4;
	v->a[90018] = actions(870);
	v->a[90019] = 1;
	small_parse_table_4501(v);
}

void	small_parse_table_4501(t_small_parse_table_array *v)
{
	v->a[90020] = sym_comment;
	v->a[90021] = actions(3849);
	v->a[90022] = 2;
	v->a[90023] = anon_sym_GT_GT;
	v->a[90024] = anon_sym_GT_PIPE;
	v->a[90025] = actions(3851);
	v->a[90026] = 2;
	v->a[90027] = anon_sym_LT_AMP_DASH;
	v->a[90028] = anon_sym_GT_AMP_DASH;
	v->a[90029] = actions(3847);
	v->a[90030] = 4;
	v->a[90031] = anon_sym_LT;
	v->a[90032] = anon_sym_GT;
	v->a[90033] = anon_sym_LT_AMP;
	v->a[90034] = anon_sym_GT_AMP;
	v->a[90035] = 4;
	v->a[90036] = actions(870);
	v->a[90037] = 1;
	v->a[90038] = sym_comment;
	v->a[90039] = actions(3921);
	small_parse_table_4502(v);
}

void	small_parse_table_4502(t_small_parse_table_array *v)
{
	v->a[90040] = 2;
	v->a[90041] = anon_sym_GT_GT;
	v->a[90042] = anon_sym_GT_PIPE;
	v->a[90043] = actions(3923);
	v->a[90044] = 2;
	v->a[90045] = anon_sym_LT_AMP_DASH;
	v->a[90046] = anon_sym_GT_AMP_DASH;
	v->a[90047] = actions(3919);
	v->a[90048] = 4;
	v->a[90049] = anon_sym_LT;
	v->a[90050] = anon_sym_GT;
	v->a[90051] = anon_sym_LT_AMP;
	v->a[90052] = anon_sym_GT_AMP;
	v->a[90053] = 8;
	v->a[90054] = actions(3);
	v->a[90055] = 1;
	v->a[90056] = sym_comment;
	v->a[90057] = actions(3907);
	v->a[90058] = 1;
	v->a[90059] = anon_sym_RPAREN;
	small_parse_table_4503(v);
}

void	small_parse_table_4503(t_small_parse_table_array *v)
{
	v->a[90060] = actions(3911);
	v->a[90061] = 1;
	v->a[90062] = anon_sym_DQUOTE;
	v->a[90063] = actions(3915);
	v->a[90064] = 1;
	v->a[90065] = aux_sym_expansion_regex_token1;
	v->a[90066] = actions(3925);
	v->a[90067] = 1;
	v->a[90068] = anon_sym_RBRACE;
	v->a[90069] = actions(3927);
	v->a[90070] = 1;
	v->a[90071] = sym_raw_string;
	v->a[90072] = actions(3929);
	v->a[90073] = 1;
	v->a[90074] = sym_regex;
	v->a[90075] = state(1960);
	v->a[90076] = 2;
	v->a[90077] = sym_string;
	v->a[90078] = aux_sym_expansion_regex_repeat1;
	v->a[90079] = 4;
	small_parse_table_4504(v);
}

void	small_parse_table_4504(t_small_parse_table_array *v)
{
	v->a[90080] = actions(870);
	v->a[90081] = 1;
	v->a[90082] = sym_comment;
	v->a[90083] = actions(3839);
	v->a[90084] = 2;
	v->a[90085] = anon_sym_GT_GT;
	v->a[90086] = anon_sym_GT_PIPE;
	v->a[90087] = actions(3841);
	v->a[90088] = 2;
	v->a[90089] = anon_sym_LT_AMP_DASH;
	v->a[90090] = anon_sym_GT_AMP_DASH;
	v->a[90091] = actions(3837);
	v->a[90092] = 4;
	v->a[90093] = anon_sym_LT;
	v->a[90094] = anon_sym_GT;
	v->a[90095] = anon_sym_LT_AMP;
	v->a[90096] = anon_sym_GT_AMP;
	v->a[90097] = 8;
	v->a[90098] = actions(3);
	v->a[90099] = 1;
	small_parse_table_4505(v);
}

/* EOF small_parse_table_900.c */
