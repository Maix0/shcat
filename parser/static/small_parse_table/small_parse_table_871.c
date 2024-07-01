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
	v->a[87100] = 1;
	v->a[87101] = anon_sym_DOLLAR_LPAREN;
	v->a[87102] = actions(3426);
	v->a[87103] = 1;
	v->a[87104] = anon_sym_BQUOTE;
	v->a[87105] = actions(3536);
	v->a[87106] = 1;
	v->a[87107] = anon_sym_DOLLAR;
	v->a[87108] = actions(3538);
	v->a[87109] = 1;
	v->a[87110] = anon_sym_DQUOTE;
	v->a[87111] = state(1906);
	v->a[87112] = 1;
	v->a[87113] = aux_sym_string_repeat1;
	v->a[87114] = state(1959);
	v->a[87115] = 4;
	v->a[87116] = sym_arithmetic_expansion;
	v->a[87117] = sym_simple_expansion;
	v->a[87118] = sym_expansion;
	v->a[87119] = sym_command_substitution;
	small_parse_table_4356(v);
}

void	small_parse_table_4356(t_small_parse_table_array *v)
{
	v->a[87120] = 3;
	v->a[87121] = actions(3);
	v->a[87122] = 1;
	v->a[87123] = sym_comment;
	v->a[87124] = actions(575);
	v->a[87125] = 2;
	v->a[87126] = sym_file_descriptor;
	v->a[87127] = aux_sym_heredoc_redirect_token1;
	v->a[87128] = actions(573);
	v->a[87129] = 10;
	v->a[87130] = anon_sym_AMP_AMP;
	v->a[87131] = anon_sym_PIPE_PIPE;
	v->a[87132] = anon_sym_LT;
	v->a[87133] = anon_sym_GT;
	v->a[87134] = anon_sym_GT_GT;
	v->a[87135] = anon_sym_LT_AMP;
	v->a[87136] = anon_sym_GT_AMP;
	v->a[87137] = anon_sym_GT_PIPE;
	v->a[87138] = anon_sym_LT_AMP_DASH;
	v->a[87139] = anon_sym_GT_AMP_DASH;
	small_parse_table_4357(v);
}

void	small_parse_table_4357(t_small_parse_table_array *v)
{
	v->a[87140] = 10;
	v->a[87141] = actions(3);
	v->a[87142] = 1;
	v->a[87143] = sym_comment;
	v->a[87144] = actions(3414);
	v->a[87145] = 1;
	v->a[87146] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87147] = actions(3420);
	v->a[87148] = 1;
	v->a[87149] = sym_string_content;
	v->a[87150] = actions(3422);
	v->a[87151] = 1;
	v->a[87152] = anon_sym_DOLLAR_LBRACE;
	v->a[87153] = actions(3424);
	v->a[87154] = 1;
	v->a[87155] = anon_sym_DOLLAR_LPAREN;
	v->a[87156] = actions(3426);
	v->a[87157] = 1;
	v->a[87158] = anon_sym_BQUOTE;
	v->a[87159] = actions(3540);
	small_parse_table_4358(v);
}

void	small_parse_table_4358(t_small_parse_table_array *v)
{
	v->a[87160] = 1;
	v->a[87161] = anon_sym_DOLLAR;
	v->a[87162] = actions(3542);
	v->a[87163] = 1;
	v->a[87164] = anon_sym_DQUOTE;
	v->a[87165] = state(1906);
	v->a[87166] = 1;
	v->a[87167] = aux_sym_string_repeat1;
	v->a[87168] = state(1959);
	v->a[87169] = 4;
	v->a[87170] = sym_arithmetic_expansion;
	v->a[87171] = sym_simple_expansion;
	v->a[87172] = sym_expansion;
	v->a[87173] = sym_command_substitution;
	v->a[87174] = 10;
	v->a[87175] = actions(3);
	v->a[87176] = 1;
	v->a[87177] = sym_comment;
	v->a[87178] = actions(3414);
	v->a[87179] = 1;
	small_parse_table_4359(v);
}

void	small_parse_table_4359(t_small_parse_table_array *v)
{
	v->a[87180] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87181] = actions(3420);
	v->a[87182] = 1;
	v->a[87183] = sym_string_content;
	v->a[87184] = actions(3422);
	v->a[87185] = 1;
	v->a[87186] = anon_sym_DOLLAR_LBRACE;
	v->a[87187] = actions(3424);
	v->a[87188] = 1;
	v->a[87189] = anon_sym_DOLLAR_LPAREN;
	v->a[87190] = actions(3426);
	v->a[87191] = 1;
	v->a[87192] = anon_sym_BQUOTE;
	v->a[87193] = actions(3544);
	v->a[87194] = 1;
	v->a[87195] = anon_sym_DOLLAR;
	v->a[87196] = actions(3546);
	v->a[87197] = 1;
	v->a[87198] = anon_sym_DQUOTE;
	v->a[87199] = state(1838);
	small_parse_table_4360(v);
}

/* EOF small_parse_table_871.c */
