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
	v->a[63800] = 15;
	v->a[63801] = anon_sym_esac;
	v->a[63802] = anon_sym_PIPE;
	v->a[63803] = anon_sym_SEMI_SEMI;
	v->a[63804] = anon_sym_AMP_AMP;
	v->a[63805] = anon_sym_PIPE_PIPE;
	v->a[63806] = anon_sym_LT;
	v->a[63807] = anon_sym_GT;
	v->a[63808] = anon_sym_GT_GT;
	v->a[63809] = anon_sym_LT_AMP;
	v->a[63810] = anon_sym_GT_AMP;
	v->a[63811] = anon_sym_GT_PIPE;
	v->a[63812] = anon_sym_LT_GT;
	v->a[63813] = anon_sym_LT_LT;
	v->a[63814] = anon_sym_LT_LT_DASH;
	v->a[63815] = anon_sym_SEMI;
	v->a[63816] = 10;
	v->a[63817] = actions(3);
	v->a[63818] = 1;
	v->a[63819] = sym_comment;
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = actions(1012);
	v->a[63821] = 1;
	v->a[63822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63823] = actions(1016);
	v->a[63824] = 1;
	v->a[63825] = anon_sym_DQUOTE;
	v->a[63826] = actions(1018);
	v->a[63827] = 1;
	v->a[63828] = anon_sym_DOLLAR_LBRACE;
	v->a[63829] = actions(1020);
	v->a[63830] = 1;
	v->a[63831] = anon_sym_DOLLAR_LPAREN;
	v->a[63832] = actions(1022);
	v->a[63833] = 1;
	v->a[63834] = anon_sym_BQUOTE;
	v->a[63835] = actions(2365);
	v->a[63836] = 1;
	v->a[63837] = anon_sym_DOLLAR;
	v->a[63838] = actions(2367);
	v->a[63839] = 1;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = sym__bare_dollar;
	v->a[63841] = actions(2363);
	v->a[63842] = 5;
	v->a[63843] = aux_sym_concatenation_token1;
	v->a[63844] = sym_raw_string;
	v->a[63845] = sym_number;
	v->a[63846] = sym__comment_word;
	v->a[63847] = sym_word;
	v->a[63848] = state(1462);
	v->a[63849] = 5;
	v->a[63850] = sym_arithmetic_expansion;
	v->a[63851] = sym_string;
	v->a[63852] = sym_simple_expansion;
	v->a[63853] = sym_expansion;
	v->a[63854] = sym_command_substitution;
	v->a[63855] = 12;
	v->a[63856] = actions(3);
	v->a[63857] = 1;
	v->a[63858] = sym_comment;
	v->a[63859] = actions(2371);
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = 1;
	v->a[63861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63862] = actions(2373);
	v->a[63863] = 1;
	v->a[63864] = anon_sym_DOLLAR;
	v->a[63865] = actions(2375);
	v->a[63866] = 1;
	v->a[63867] = anon_sym_DQUOTE;
	v->a[63868] = actions(2377);
	v->a[63869] = 1;
	v->a[63870] = anon_sym_DOLLAR_LBRACE;
	v->a[63871] = actions(2379);
	v->a[63872] = 1;
	v->a[63873] = anon_sym_DOLLAR_LPAREN;
	v->a[63874] = actions(2381);
	v->a[63875] = 1;
	v->a[63876] = anon_sym_BQUOTE;
	v->a[63877] = actions(2383);
	v->a[63878] = 1;
	v->a[63879] = sym__comment_word;
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = actions(2385);
	v->a[63881] = 1;
	v->a[63882] = sym__empty_value;
	v->a[63883] = state(1060);
	v->a[63884] = 1;
	v->a[63885] = sym_concatenation;
	v->a[63886] = actions(2369);
	v->a[63887] = 3;
	v->a[63888] = sym_raw_string;
	v->a[63889] = sym_number;
	v->a[63890] = sym_word;
	v->a[63891] = state(1006);
	v->a[63892] = 5;
	v->a[63893] = sym_arithmetic_expansion;
	v->a[63894] = sym_string;
	v->a[63895] = sym_simple_expansion;
	v->a[63896] = sym_expansion;
	v->a[63897] = sym_command_substitution;
	v->a[63898] = 3;
	v->a[63899] = actions(3);
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */
