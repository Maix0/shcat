/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_791.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3955(t_small_parse_table_array *v)
{
	v->a[79100] = anon_sym_SEMI_SEMI;
	v->a[79101] = anon_sym_AMP_AMP;
	v->a[79102] = anon_sym_PIPE_PIPE;
	v->a[79103] = anon_sym_LT;
	v->a[79104] = anon_sym_GT;
	v->a[79105] = anon_sym_GT_GT;
	v->a[79106] = anon_sym_AMP_GT;
	v->a[79107] = anon_sym_AMP_GT_GT;
	v->a[79108] = anon_sym_LT_AMP;
	v->a[79109] = anon_sym_GT_AMP;
	v->a[79110] = anon_sym_GT_PIPE;
	v->a[79111] = anon_sym_LT_AMP_DASH;
	v->a[79112] = anon_sym_GT_AMP_DASH;
	v->a[79113] = anon_sym_LT_LT;
	v->a[79114] = anon_sym_LT_LT_DASH;
	v->a[79115] = anon_sym_AMP;
	v->a[79116] = anon_sym_SEMI;
	v->a[79117] = 3;
	v->a[79118] = actions(3);
	v->a[79119] = 1;
	small_parse_table_3956(v);
}

void	small_parse_table_3956(t_small_parse_table_array *v)
{
	v->a[79120] = sym_comment;
	v->a[79121] = actions(2691);
	v->a[79122] = 2;
	v->a[79123] = sym_file_descriptor;
	v->a[79124] = aux_sym_heredoc_redirect_token1;
	v->a[79125] = actions(2693);
	v->a[79126] = 19;
	v->a[79127] = anon_sym_esac;
	v->a[79128] = anon_sym_PIPE;
	v->a[79129] = anon_sym_SEMI_SEMI;
	v->a[79130] = anon_sym_AMP_AMP;
	v->a[79131] = anon_sym_PIPE_PIPE;
	v->a[79132] = anon_sym_LT;
	v->a[79133] = anon_sym_GT;
	v->a[79134] = anon_sym_GT_GT;
	v->a[79135] = anon_sym_AMP_GT;
	v->a[79136] = anon_sym_AMP_GT_GT;
	v->a[79137] = anon_sym_LT_AMP;
	v->a[79138] = anon_sym_GT_AMP;
	v->a[79139] = anon_sym_GT_PIPE;
	small_parse_table_3957(v);
}

void	small_parse_table_3957(t_small_parse_table_array *v)
{
	v->a[79140] = anon_sym_LT_AMP_DASH;
	v->a[79141] = anon_sym_GT_AMP_DASH;
	v->a[79142] = anon_sym_LT_LT;
	v->a[79143] = anon_sym_LT_LT_DASH;
	v->a[79144] = anon_sym_AMP;
	v->a[79145] = anon_sym_SEMI;
	v->a[79146] = 15;
	v->a[79147] = actions(3);
	v->a[79148] = 1;
	v->a[79149] = sym_comment;
	v->a[79150] = actions(1959);
	v->a[79151] = 1;
	v->a[79152] = anon_sym_LPAREN;
	v->a[79153] = actions(1963);
	v->a[79154] = 1;
	v->a[79155] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79156] = actions(1965);
	v->a[79157] = 1;
	v->a[79158] = anon_sym_DOLLAR;
	v->a[79159] = actions(1967);
	small_parse_table_3958(v);
}

void	small_parse_table_3958(t_small_parse_table_array *v)
{
	v->a[79160] = 1;
	v->a[79161] = anon_sym_DQUOTE;
	v->a[79162] = actions(1969);
	v->a[79163] = 1;
	v->a[79164] = anon_sym_DOLLAR_LBRACE;
	v->a[79165] = actions(1971);
	v->a[79166] = 1;
	v->a[79167] = anon_sym_DOLLAR_LPAREN;
	v->a[79168] = actions(1973);
	v->a[79169] = 1;
	v->a[79170] = anon_sym_BQUOTE;
	v->a[79171] = actions(1975);
	v->a[79172] = 1;
	v->a[79173] = sym_extglob_pattern;
	v->a[79174] = state(1547);
	v->a[79175] = 1;
	v->a[79176] = aux_sym_case_statement_repeat1;
	v->a[79177] = state(2080);
	v->a[79178] = 1;
	v->a[79179] = sym_case_item;
	small_parse_table_3959(v);
}

void	small_parse_table_3959(t_small_parse_table_array *v)
{
	v->a[79180] = state(2449);
	v->a[79181] = 1;
	v->a[79182] = sym__case_item_last;
	v->a[79183] = state(2224);
	v->a[79184] = 2;
	v->a[79185] = sym_concatenation;
	v->a[79186] = sym__extglob_blob;
	v->a[79187] = actions(1955);
	v->a[79188] = 3;
	v->a[79189] = sym_raw_string;
	v->a[79190] = sym_number;
	v->a[79191] = sym_word;
	v->a[79192] = state(2157);
	v->a[79193] = 5;
	v->a[79194] = sym_arithmetic_expansion;
	v->a[79195] = sym_string;
	v->a[79196] = sym_simple_expansion;
	v->a[79197] = sym_expansion;
	v->a[79198] = sym_command_substitution;
	v->a[79199] = 3;
	small_parse_table_3960(v);
}

/* EOF small_parse_table_791.c */
