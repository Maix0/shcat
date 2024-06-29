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
	v->a[90001] = sym_string_content;
	v->a[90002] = actions(3422);
	v->a[90003] = 1;
	v->a[90004] = anon_sym_DOLLAR_LBRACE;
	v->a[90005] = actions(3424);
	v->a[90006] = 1;
	v->a[90007] = anon_sym_DOLLAR_LPAREN;
	v->a[90008] = actions(3426);
	v->a[90009] = 1;
	v->a[90010] = anon_sym_BQUOTE;
	v->a[90011] = actions(3584);
	v->a[90012] = 1;
	v->a[90013] = anon_sym_DOLLAR;
	v->a[90014] = actions(3586);
	v->a[90015] = 1;
	v->a[90016] = anon_sym_DQUOTE;
	v->a[90017] = state(1858);
	v->a[90018] = 1;
	v->a[90019] = aux_sym_string_repeat1;
	small_parse_table_4501(v);
}

void	small_parse_table_4501(t_small_parse_table_array *v)
{
	v->a[90020] = state(1963);
	v->a[90021] = 4;
	v->a[90022] = sym_arithmetic_expansion;
	v->a[90023] = sym_simple_expansion;
	v->a[90024] = sym_expansion;
	v->a[90025] = sym_command_substitution;
	v->a[90026] = 10;
	v->a[90027] = actions(3);
	v->a[90028] = 1;
	v->a[90029] = sym_comment;
	v->a[90030] = actions(3414);
	v->a[90031] = 1;
	v->a[90032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90033] = actions(3420);
	v->a[90034] = 1;
	v->a[90035] = sym_string_content;
	v->a[90036] = actions(3422);
	v->a[90037] = 1;
	v->a[90038] = anon_sym_DOLLAR_LBRACE;
	v->a[90039] = actions(3424);
	small_parse_table_4502(v);
}

void	small_parse_table_4502(t_small_parse_table_array *v)
{
	v->a[90040] = 1;
	v->a[90041] = anon_sym_DOLLAR_LPAREN;
	v->a[90042] = actions(3426);
	v->a[90043] = 1;
	v->a[90044] = anon_sym_BQUOTE;
	v->a[90045] = actions(3588);
	v->a[90046] = 1;
	v->a[90047] = anon_sym_DOLLAR;
	v->a[90048] = actions(3590);
	v->a[90049] = 1;
	v->a[90050] = anon_sym_DQUOTE;
	v->a[90051] = state(1863);
	v->a[90052] = 1;
	v->a[90053] = aux_sym_string_repeat1;
	v->a[90054] = state(1963);
	v->a[90055] = 4;
	v->a[90056] = sym_arithmetic_expansion;
	v->a[90057] = sym_simple_expansion;
	v->a[90058] = sym_expansion;
	v->a[90059] = sym_command_substitution;
	small_parse_table_4503(v);
}

void	small_parse_table_4503(t_small_parse_table_array *v)
{
	v->a[90060] = 3;
	v->a[90061] = actions(3);
	v->a[90062] = 1;
	v->a[90063] = sym_comment;
	v->a[90064] = actions(1276);
	v->a[90065] = 1;
	v->a[90066] = sym_extglob_pattern;
	v->a[90067] = actions(1274);
	v->a[90068] = 11;
	v->a[90069] = anon_sym_esac;
	v->a[90070] = anon_sym_LPAREN;
	v->a[90071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90072] = anon_sym_DOLLAR;
	v->a[90073] = anon_sym_DQUOTE;
	v->a[90074] = sym_raw_string;
	v->a[90075] = sym_number;
	v->a[90076] = anon_sym_DOLLAR_LBRACE;
	v->a[90077] = anon_sym_DOLLAR_LPAREN;
	v->a[90078] = anon_sym_BQUOTE;
	v->a[90079] = sym_word;
	small_parse_table_4504(v);
}

void	small_parse_table_4504(t_small_parse_table_array *v)
{
	v->a[90080] = 10;
	v->a[90081] = actions(3);
	v->a[90082] = 1;
	v->a[90083] = sym_comment;
	v->a[90084] = actions(3414);
	v->a[90085] = 1;
	v->a[90086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90087] = actions(3420);
	v->a[90088] = 1;
	v->a[90089] = sym_string_content;
	v->a[90090] = actions(3422);
	v->a[90091] = 1;
	v->a[90092] = anon_sym_DOLLAR_LBRACE;
	v->a[90093] = actions(3424);
	v->a[90094] = 1;
	v->a[90095] = anon_sym_DOLLAR_LPAREN;
	v->a[90096] = actions(3426);
	v->a[90097] = 1;
	v->a[90098] = anon_sym_BQUOTE;
	v->a[90099] = actions(3592);
	small_parse_table_4505(v);
}

/* EOF small_parse_table_900.c */
