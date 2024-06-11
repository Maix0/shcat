/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_910.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4550(t_small_parse_table_array *v)
{
	v->a[91000] = state(2227);
	v->a[91001] = 2;
	v->a[91002] = sym_simple_expansion;
	v->a[91003] = sym_command_substitution;
	v->a[91004] = 10;
	v->a[91005] = actions(3);
	v->a[91006] = 1;
	v->a[91007] = sym_comment;
	v->a[91008] = actions(3361);
	v->a[91009] = 1;
	v->a[91010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91011] = actions(3365);
	v->a[91012] = 1;
	v->a[91013] = anon_sym_DQUOTE;
	v->a[91014] = actions(3367);
	v->a[91015] = 1;
	v->a[91016] = anon_sym_DOLLAR_LBRACE;
	v->a[91017] = actions(3369);
	v->a[91018] = 1;
	v->a[91019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4551(v);
}

void	small_parse_table_4551(t_small_parse_table_array *v)
{
	v->a[91020] = actions(3371);
	v->a[91021] = 1;
	v->a[91022] = anon_sym_BQUOTE;
	v->a[91023] = actions(3559);
	v->a[91024] = 1;
	v->a[91025] = anon_sym_DOLLAR;
	v->a[91026] = state(2208);
	v->a[91027] = 1;
	v->a[91028] = sym_concatenation;
	v->a[91029] = actions(3616);
	v->a[91030] = 3;
	v->a[91031] = sym_raw_string;
	v->a[91032] = sym_number;
	v->a[91033] = sym_word;
	v->a[91034] = state(2112);
	v->a[91035] = 5;
	v->a[91036] = sym_arithmetic_expansion;
	v->a[91037] = sym_string;
	v->a[91038] = sym_simple_expansion;
	v->a[91039] = sym_expansion;
	small_parse_table_4552(v);
}

void	small_parse_table_4552(t_small_parse_table_array *v)
{
	v->a[91040] = sym_command_substitution;
	v->a[91041] = 10;
	v->a[91042] = actions(3);
	v->a[91043] = 1;
	v->a[91044] = sym_comment;
	v->a[91045] = actions(3361);
	v->a[91046] = 1;
	v->a[91047] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91048] = actions(3365);
	v->a[91049] = 1;
	v->a[91050] = anon_sym_DQUOTE;
	v->a[91051] = actions(3367);
	v->a[91052] = 1;
	v->a[91053] = anon_sym_DOLLAR_LBRACE;
	v->a[91054] = actions(3369);
	v->a[91055] = 1;
	v->a[91056] = anon_sym_DOLLAR_LPAREN;
	v->a[91057] = actions(3371);
	v->a[91058] = 1;
	v->a[91059] = anon_sym_BQUOTE;
	small_parse_table_4553(v);
}

void	small_parse_table_4553(t_small_parse_table_array *v)
{
	v->a[91060] = actions(3559);
	v->a[91061] = 1;
	v->a[91062] = anon_sym_DOLLAR;
	v->a[91063] = state(2179);
	v->a[91064] = 1;
	v->a[91065] = sym_concatenation;
	v->a[91066] = actions(3618);
	v->a[91067] = 3;
	v->a[91068] = sym_raw_string;
	v->a[91069] = sym_number;
	v->a[91070] = sym_word;
	v->a[91071] = state(2116);
	v->a[91072] = 5;
	v->a[91073] = sym_arithmetic_expansion;
	v->a[91074] = sym_string;
	v->a[91075] = sym_simple_expansion;
	v->a[91076] = sym_expansion;
	v->a[91077] = sym_command_substitution;
	v->a[91078] = 6;
	v->a[91079] = actions(3);
	small_parse_table_4554(v);
}

void	small_parse_table_4554(t_small_parse_table_array *v)
{
	v->a[91080] = 1;
	v->a[91081] = sym_comment;
	v->a[91082] = actions(3620);
	v->a[91083] = 1;
	v->a[91084] = anon_sym_RBRACE;
	v->a[91085] = actions(3622);
	v->a[91086] = 1;
	v->a[91087] = anon_sym_PERCENT;
	v->a[91088] = state(2335);
	v->a[91089] = 2;
	v->a[91090] = sym_expansion_expression;
	v->a[91091] = sym_expansion_regex;
	v->a[91092] = actions(3624);
	v->a[91093] = 3;
	v->a[91094] = sym__immediate_double_hash;
	v->a[91095] = anon_sym_POUND;
	v->a[91096] = anon_sym_PERCENT_PERCENT;
	v->a[91097] = actions(3626);
	v->a[91098] = 8;
	v->a[91099] = anon_sym_COLON_DASH;
	small_parse_table_4555(v);
}

/* EOF small_parse_table_910.c */
