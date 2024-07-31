/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_638.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3190(t_small_parse_table_array *v)
{
	v->a[63800] = actions(3);
	v->a[63801] = 1;
	v->a[63802] = sym_comment;
	v->a[63803] = actions(2548);
	v->a[63804] = 1;
	v->a[63805] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63806] = actions(2554);
	v->a[63807] = 1;
	v->a[63808] = sym_string_content;
	v->a[63809] = actions(2556);
	v->a[63810] = 1;
	v->a[63811] = anon_sym_DOLLAR_LBRACE;
	v->a[63812] = actions(2558);
	v->a[63813] = 1;
	v->a[63814] = anon_sym_DOLLAR_LPAREN;
	v->a[63815] = actions(2560);
	v->a[63816] = 1;
	v->a[63817] = anon_sym_BQUOTE;
	v->a[63818] = actions(2809);
	v->a[63819] = 1;
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = anon_sym_DOLLAR;
	v->a[63821] = actions(2811);
	v->a[63822] = 1;
	v->a[63823] = anon_sym_DQUOTE;
	v->a[63824] = state(1370);
	v->a[63825] = 1;
	v->a[63826] = aux_sym_string_repeat1;
	v->a[63827] = state(1477);
	v->a[63828] = 4;
	v->a[63829] = sym_arithmetic_expansion;
	v->a[63830] = sym_simple_expansion;
	v->a[63831] = sym_expansion;
	v->a[63832] = sym_command_substitution;
	v->a[63833] = 3;
	v->a[63834] = actions(407);
	v->a[63835] = 1;
	v->a[63836] = sym_comment;
	v->a[63837] = actions(1801);
	v->a[63838] = 4;
	v->a[63839] = anon_sym_PIPE;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = anon_sym_LT;
	v->a[63841] = anon_sym_GT;
	v->a[63842] = anon_sym_LT_LT;
	v->a[63843] = actions(1799);
	v->a[63844] = 8;
	v->a[63845] = anon_sym_AMP_AMP;
	v->a[63846] = anon_sym_PIPE_PIPE;
	v->a[63847] = anon_sym_GT_GT;
	v->a[63848] = anon_sym_LT_AMP;
	v->a[63849] = anon_sym_GT_AMP;
	v->a[63850] = anon_sym_GT_PIPE;
	v->a[63851] = anon_sym_LT_GT;
	v->a[63852] = anon_sym_LT_LT_DASH;
	v->a[63853] = 3;
	v->a[63854] = actions(407);
	v->a[63855] = 1;
	v->a[63856] = sym_comment;
	v->a[63857] = actions(1852);
	v->a[63858] = 4;
	v->a[63859] = anon_sym_PIPE;
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = anon_sym_LT;
	v->a[63861] = anon_sym_GT;
	v->a[63862] = anon_sym_LT_LT;
	v->a[63863] = actions(1850);
	v->a[63864] = 8;
	v->a[63865] = anon_sym_AMP_AMP;
	v->a[63866] = anon_sym_PIPE_PIPE;
	v->a[63867] = anon_sym_GT_GT;
	v->a[63868] = anon_sym_LT_AMP;
	v->a[63869] = anon_sym_GT_AMP;
	v->a[63870] = anon_sym_GT_PIPE;
	v->a[63871] = anon_sym_LT_GT;
	v->a[63872] = anon_sym_LT_LT_DASH;
	v->a[63873] = 3;
	v->a[63874] = actions(3);
	v->a[63875] = 1;
	v->a[63876] = sym_comment;
	v->a[63877] = actions(1111);
	v->a[63878] = 1;
	v->a[63879] = sym_extglob_pattern;
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = actions(1109);
	v->a[63881] = 11;
	v->a[63882] = anon_sym_esac;
	v->a[63883] = anon_sym_LPAREN;
	v->a[63884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63885] = anon_sym_DOLLAR;
	v->a[63886] = anon_sym_DQUOTE;
	v->a[63887] = sym_raw_string;
	v->a[63888] = sym_number;
	v->a[63889] = anon_sym_DOLLAR_LBRACE;
	v->a[63890] = anon_sym_DOLLAR_LPAREN;
	v->a[63891] = anon_sym_BQUOTE;
	v->a[63892] = sym_word;
	v->a[63893] = 8;
	v->a[63894] = actions(3);
	v->a[63895] = 1;
	v->a[63896] = sym_comment;
	v->a[63897] = actions(2566);
	v->a[63898] = 1;
	v->a[63899] = anon_sym_POUND;
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */
