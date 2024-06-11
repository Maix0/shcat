/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_848.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4240(t_small_parse_table_array *v)
{
	v->a[84800] = actions(1965);
	v->a[84801] = 1;
	v->a[84802] = anon_sym_DOLLAR;
	v->a[84803] = actions(1967);
	v->a[84804] = 1;
	v->a[84805] = anon_sym_DQUOTE;
	v->a[84806] = actions(1969);
	v->a[84807] = 1;
	v->a[84808] = anon_sym_DOLLAR_LBRACE;
	v->a[84809] = actions(1971);
	v->a[84810] = 1;
	v->a[84811] = anon_sym_DOLLAR_LPAREN;
	v->a[84812] = actions(1973);
	v->a[84813] = 1;
	v->a[84814] = anon_sym_BQUOTE;
	v->a[84815] = actions(3334);
	v->a[84816] = 1;
	v->a[84817] = sym__bare_dollar;
	v->a[84818] = actions(3332);
	v->a[84819] = 5;
	small_parse_table_4241(v);
}

void	small_parse_table_4241(t_small_parse_table_array *v)
{
	v->a[84820] = aux_sym_concatenation_token1;
	v->a[84821] = sym_raw_string;
	v->a[84822] = sym_number;
	v->a[84823] = sym__comment_word;
	v->a[84824] = sym_word;
	v->a[84825] = state(2219);
	v->a[84826] = 5;
	v->a[84827] = sym_arithmetic_expansion;
	v->a[84828] = sym_string;
	v->a[84829] = sym_simple_expansion;
	v->a[84830] = sym_expansion;
	v->a[84831] = sym_command_substitution;
	v->a[84832] = 10;
	v->a[84833] = actions(3);
	v->a[84834] = 1;
	v->a[84835] = sym_comment;
	v->a[84836] = actions(109);
	v->a[84837] = 1;
	v->a[84838] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84839] = actions(113);
	small_parse_table_4242(v);
}

void	small_parse_table_4242(t_small_parse_table_array *v)
{
	v->a[84840] = 1;
	v->a[84841] = anon_sym_DQUOTE;
	v->a[84842] = actions(117);
	v->a[84843] = 1;
	v->a[84844] = anon_sym_DOLLAR_LBRACE;
	v->a[84845] = actions(119);
	v->a[84846] = 1;
	v->a[84847] = anon_sym_DOLLAR_LPAREN;
	v->a[84848] = actions(121);
	v->a[84849] = 1;
	v->a[84850] = anon_sym_BQUOTE;
	v->a[84851] = actions(3228);
	v->a[84852] = 1;
	v->a[84853] = sym__bare_dollar;
	v->a[84854] = actions(3336);
	v->a[84855] = 1;
	v->a[84856] = anon_sym_DOLLAR;
	v->a[84857] = actions(3226);
	v->a[84858] = 5;
	v->a[84859] = aux_sym_concatenation_token1;
	small_parse_table_4243(v);
}

void	small_parse_table_4243(t_small_parse_table_array *v)
{
	v->a[84860] = sym_raw_string;
	v->a[84861] = sym_number;
	v->a[84862] = sym__comment_word;
	v->a[84863] = sym_word;
	v->a[84864] = state(319);
	v->a[84865] = 5;
	v->a[84866] = sym_arithmetic_expansion;
	v->a[84867] = sym_string;
	v->a[84868] = sym_simple_expansion;
	v->a[84869] = sym_expansion;
	v->a[84870] = sym_command_substitution;
	v->a[84871] = 10;
	v->a[84872] = actions(3);
	v->a[84873] = 1;
	v->a[84874] = sym_comment;
	v->a[84875] = actions(749);
	v->a[84876] = 1;
	v->a[84877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84878] = actions(751);
	v->a[84879] = 1;
	small_parse_table_4244(v);
}

void	small_parse_table_4244(t_small_parse_table_array *v)
{
	v->a[84880] = anon_sym_DOLLAR;
	v->a[84881] = actions(753);
	v->a[84882] = 1;
	v->a[84883] = anon_sym_DQUOTE;
	v->a[84884] = actions(755);
	v->a[84885] = 1;
	v->a[84886] = anon_sym_DOLLAR_LBRACE;
	v->a[84887] = actions(757);
	v->a[84888] = 1;
	v->a[84889] = anon_sym_DOLLAR_LPAREN;
	v->a[84890] = actions(759);
	v->a[84891] = 1;
	v->a[84892] = anon_sym_BQUOTE;
	v->a[84893] = actions(3340);
	v->a[84894] = 1;
	v->a[84895] = sym__bare_dollar;
	v->a[84896] = actions(3338);
	v->a[84897] = 5;
	v->a[84898] = aux_sym_concatenation_token1;
	v->a[84899] = sym_raw_string;
	small_parse_table_4245(v);
}

/* EOF small_parse_table_848.c */
