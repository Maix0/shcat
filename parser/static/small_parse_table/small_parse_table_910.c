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
	v->a[91000] = actions(3720);
	v->a[91001] = 10;
	v->a[91002] = anon_sym_LPAREN;
	v->a[91003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91004] = anon_sym_DOLLAR;
	v->a[91005] = anon_sym_DQUOTE;
	v->a[91006] = sym_raw_string;
	v->a[91007] = sym_number;
	v->a[91008] = anon_sym_DOLLAR_LBRACE;
	v->a[91009] = anon_sym_DOLLAR_LPAREN;
	v->a[91010] = anon_sym_BQUOTE;
	v->a[91011] = sym_word;
	v->a[91012] = 10;
	v->a[91013] = actions(3);
	v->a[91014] = 1;
	v->a[91015] = sym_comment;
	v->a[91016] = actions(3414);
	v->a[91017] = 1;
	v->a[91018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91019] = actions(3420);
	small_parse_table_4551(v);
}

void	small_parse_table_4551(t_small_parse_table_array *v)
{
	v->a[91020] = 1;
	v->a[91021] = sym_string_content;
	v->a[91022] = actions(3422);
	v->a[91023] = 1;
	v->a[91024] = anon_sym_DOLLAR_LBRACE;
	v->a[91025] = actions(3424);
	v->a[91026] = 1;
	v->a[91027] = anon_sym_DOLLAR_LPAREN;
	v->a[91028] = actions(3426);
	v->a[91029] = 1;
	v->a[91030] = anon_sym_BQUOTE;
	v->a[91031] = actions(3726);
	v->a[91032] = 1;
	v->a[91033] = anon_sym_DOLLAR;
	v->a[91034] = actions(3728);
	v->a[91035] = 1;
	v->a[91036] = anon_sym_DQUOTE;
	v->a[91037] = state(1863);
	v->a[91038] = 1;
	v->a[91039] = aux_sym_string_repeat1;
	small_parse_table_4552(v);
}

void	small_parse_table_4552(t_small_parse_table_array *v)
{
	v->a[91040] = state(1963);
	v->a[91041] = 4;
	v->a[91042] = sym_arithmetic_expansion;
	v->a[91043] = sym_simple_expansion;
	v->a[91044] = sym_expansion;
	v->a[91045] = sym_command_substitution;
	v->a[91046] = 10;
	v->a[91047] = actions(3);
	v->a[91048] = 1;
	v->a[91049] = sym_comment;
	v->a[91050] = actions(3414);
	v->a[91051] = 1;
	v->a[91052] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91053] = actions(3420);
	v->a[91054] = 1;
	v->a[91055] = sym_string_content;
	v->a[91056] = actions(3422);
	v->a[91057] = 1;
	v->a[91058] = anon_sym_DOLLAR_LBRACE;
	v->a[91059] = actions(3424);
	small_parse_table_4553(v);
}

void	small_parse_table_4553(t_small_parse_table_array *v)
{
	v->a[91060] = 1;
	v->a[91061] = anon_sym_DOLLAR_LPAREN;
	v->a[91062] = actions(3426);
	v->a[91063] = 1;
	v->a[91064] = anon_sym_BQUOTE;
	v->a[91065] = actions(3730);
	v->a[91066] = 1;
	v->a[91067] = anon_sym_DOLLAR;
	v->a[91068] = actions(3732);
	v->a[91069] = 1;
	v->a[91070] = anon_sym_DQUOTE;
	v->a[91071] = state(1881);
	v->a[91072] = 1;
	v->a[91073] = aux_sym_string_repeat1;
	v->a[91074] = state(1963);
	v->a[91075] = 4;
	v->a[91076] = sym_arithmetic_expansion;
	v->a[91077] = sym_simple_expansion;
	v->a[91078] = sym_expansion;
	v->a[91079] = sym_command_substitution;
	small_parse_table_4554(v);
}

void	small_parse_table_4554(t_small_parse_table_array *v)
{
	v->a[91080] = 4;
	v->a[91081] = actions(3);
	v->a[91082] = 1;
	v->a[91083] = sym_comment;
	v->a[91084] = actions(3722);
	v->a[91085] = 1;
	v->a[91086] = anon_sym_esac;
	v->a[91087] = actions(3724);
	v->a[91088] = 1;
	v->a[91089] = sym_extglob_pattern;
	v->a[91090] = actions(3720);
	v->a[91091] = 10;
	v->a[91092] = anon_sym_LPAREN;
	v->a[91093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91094] = anon_sym_DOLLAR;
	v->a[91095] = anon_sym_DQUOTE;
	v->a[91096] = sym_raw_string;
	v->a[91097] = sym_number;
	v->a[91098] = anon_sym_DOLLAR_LBRACE;
	v->a[91099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4555(v);
}

/* EOF small_parse_table_910.c */
