/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_871.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4355(t_small_parse_table_array *v)
{
	v->a[87100] = sym_string;
	v->a[87101] = sym_simple_expansion;
	v->a[87102] = sym_expansion;
	v->a[87103] = sym_command_substitution;
	v->a[87104] = 10;
	v->a[87105] = actions(3);
	v->a[87106] = 1;
	v->a[87107] = sym_comment;
	v->a[87108] = actions(824);
	v->a[87109] = 1;
	v->a[87110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87111] = actions(828);
	v->a[87112] = 1;
	v->a[87113] = anon_sym_DQUOTE;
	v->a[87114] = actions(830);
	v->a[87115] = 1;
	v->a[87116] = anon_sym_DOLLAR_LBRACE;
	v->a[87117] = actions(832);
	v->a[87118] = 1;
	v->a[87119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4356(v);
}

void	small_parse_table_4356(t_small_parse_table_array *v)
{
	v->a[87120] = actions(834);
	v->a[87121] = 1;
	v->a[87122] = anon_sym_BQUOTE;
	v->a[87123] = actions(3348);
	v->a[87124] = 1;
	v->a[87125] = sym__bare_dollar;
	v->a[87126] = actions(3531);
	v->a[87127] = 1;
	v->a[87128] = anon_sym_DOLLAR;
	v->a[87129] = actions(3346);
	v->a[87130] = 5;
	v->a[87131] = aux_sym_concatenation_token1;
	v->a[87132] = sym_raw_string;
	v->a[87133] = sym_number;
	v->a[87134] = sym__comment_word;
	v->a[87135] = sym_word;
	v->a[87136] = state(1185);
	v->a[87137] = 5;
	v->a[87138] = sym_arithmetic_expansion;
	v->a[87139] = sym_string;
	small_parse_table_4357(v);
}

void	small_parse_table_4357(t_small_parse_table_array *v)
{
	v->a[87140] = sym_simple_expansion;
	v->a[87141] = sym_expansion;
	v->a[87142] = sym_command_substitution;
	v->a[87143] = 10;
	v->a[87144] = actions(3);
	v->a[87145] = 1;
	v->a[87146] = sym_comment;
	v->a[87147] = actions(497);
	v->a[87148] = 1;
	v->a[87149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87150] = actions(501);
	v->a[87151] = 1;
	v->a[87152] = anon_sym_DQUOTE;
	v->a[87153] = actions(503);
	v->a[87154] = 1;
	v->a[87155] = anon_sym_DOLLAR_LBRACE;
	v->a[87156] = actions(505);
	v->a[87157] = 1;
	v->a[87158] = anon_sym_DOLLAR_LPAREN;
	v->a[87159] = actions(507);
	small_parse_table_4358(v);
}

void	small_parse_table_4358(t_small_parse_table_array *v)
{
	v->a[87160] = 1;
	v->a[87161] = anon_sym_BQUOTE;
	v->a[87162] = actions(3425);
	v->a[87163] = 1;
	v->a[87164] = sym__bare_dollar;
	v->a[87165] = actions(3533);
	v->a[87166] = 1;
	v->a[87167] = anon_sym_DOLLAR;
	v->a[87168] = actions(3423);
	v->a[87169] = 5;
	v->a[87170] = aux_sym_concatenation_token1;
	v->a[87171] = sym_raw_string;
	v->a[87172] = sym_number;
	v->a[87173] = sym__comment_word;
	v->a[87174] = sym_word;
	v->a[87175] = state(431);
	v->a[87176] = 5;
	v->a[87177] = sym_arithmetic_expansion;
	v->a[87178] = sym_string;
	v->a[87179] = sym_simple_expansion;
	small_parse_table_4359(v);
}

void	small_parse_table_4359(t_small_parse_table_array *v)
{
	v->a[87180] = sym_expansion;
	v->a[87181] = sym_command_substitution;
	v->a[87182] = 10;
	v->a[87183] = actions(3);
	v->a[87184] = 1;
	v->a[87185] = sym_comment;
	v->a[87186] = actions(3172);
	v->a[87187] = 1;
	v->a[87188] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87189] = actions(3176);
	v->a[87190] = 1;
	v->a[87191] = anon_sym_DQUOTE;
	v->a[87192] = actions(3178);
	v->a[87193] = 1;
	v->a[87194] = anon_sym_DOLLAR_LBRACE;
	v->a[87195] = actions(3180);
	v->a[87196] = 1;
	v->a[87197] = anon_sym_DOLLAR_LPAREN;
	v->a[87198] = actions(3182);
	v->a[87199] = 1;
	small_parse_table_4360(v);
}

/* EOF small_parse_table_871.c */
