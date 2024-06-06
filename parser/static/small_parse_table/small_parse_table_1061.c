/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1061.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5305(t_small_parse_table_array *v)
{
	v->a[106100] = actions(5704);
	v->a[106101] = 1;
	v->a[106102] = aux_sym_number_token2;
	v->a[106103] = actions(5706);
	v->a[106104] = 1;
	v->a[106105] = anon_sym_DOLLAR_LBRACE;
	v->a[106106] = actions(5708);
	v->a[106107] = 1;
	v->a[106108] = anon_sym_DOLLAR_LPAREN;
	v->a[106109] = actions(5710);
	v->a[106110] = 1;
	v->a[106111] = anon_sym_BQUOTE;
	v->a[106112] = actions(5712);
	v->a[106113] = 1;
	v->a[106114] = anon_sym_DOLLAR_BQUOTE;
	v->a[106115] = actions(5718);
	v->a[106116] = 1;
	v->a[106117] = sym__brace_start;
	v->a[106118] = actions(6097);
	v->a[106119] = 1;
	small_parse_table_5306(v);
}

void	small_parse_table_5306(t_small_parse_table_array *v)
{
	v->a[106120] = sym_word;
	v->a[106121] = state(864);
	v->a[106122] = 1;
	v->a[106123] = aux_sym__literal_repeat1;
	v->a[106124] = actions(6099);
	v->a[106125] = 2;
	v->a[106126] = sym_test_operator;
	v->a[106127] = sym_raw_string;
	v->a[106128] = state(282);
	v->a[106129] = 2;
	v->a[106130] = sym_concatenation;
	v->a[106131] = aux_sym_for_statement_repeat1;
	v->a[106132] = state(577);
	v->a[106133] = 7;
	v->a[106134] = sym_arithmetic_expansion;
	v->a[106135] = sym_brace_expression;
	v->a[106136] = sym_string;
	v->a[106137] = sym_number;
	v->a[106138] = sym_simple_expansion;
	v->a[106139] = sym_expansion;
	small_parse_table_5307(v);
}

void	small_parse_table_5307(t_small_parse_table_array *v)
{
	v->a[106140] = sym_command_substitution;
	v->a[106141] = 3;
	v->a[106142] = actions(3);
	v->a[106143] = 1;
	v->a[106144] = sym_comment;
	v->a[106145] = actions(6103);
	v->a[106146] = 2;
	v->a[106147] = sym_file_descriptor;
	v->a[106148] = aux_sym_heredoc_redirect_token1;
	v->a[106149] = actions(6101);
	v->a[106150] = 22;
	v->a[106151] = anon_sym_esac;
	v->a[106152] = anon_sym_PIPE;
	v->a[106153] = anon_sym_SEMI_SEMI;
	v->a[106154] = anon_sym_SEMI_AMP;
	v->a[106155] = anon_sym_SEMI_SEMI_AMP;
	v->a[106156] = anon_sym_PIPE_AMP;
	v->a[106157] = anon_sym_AMP_AMP;
	v->a[106158] = anon_sym_PIPE_PIPE;
	v->a[106159] = anon_sym_LT;
	small_parse_table_5308(v);
}

void	small_parse_table_5308(t_small_parse_table_array *v)
{
	v->a[106160] = anon_sym_GT;
	v->a[106161] = anon_sym_GT_GT;
	v->a[106162] = anon_sym_AMP_GT;
	v->a[106163] = anon_sym_AMP_GT_GT;
	v->a[106164] = anon_sym_LT_AMP;
	v->a[106165] = anon_sym_GT_AMP;
	v->a[106166] = anon_sym_GT_PIPE;
	v->a[106167] = anon_sym_LT_AMP_DASH;
	v->a[106168] = anon_sym_GT_AMP_DASH;
	v->a[106169] = anon_sym_LT_LT;
	v->a[106170] = anon_sym_LT_LT_DASH;
	v->a[106171] = anon_sym_AMP;
	v->a[106172] = anon_sym_SEMI;
	v->a[106173] = 3;
	v->a[106174] = actions(3);
	v->a[106175] = 1;
	v->a[106176] = sym_comment;
	v->a[106177] = actions(6107);
	v->a[106178] = 2;
	v->a[106179] = sym_file_descriptor;
	small_parse_table_5309(v);
}

void	small_parse_table_5309(t_small_parse_table_array *v)
{
	v->a[106180] = aux_sym_heredoc_redirect_token1;
	v->a[106181] = actions(6105);
	v->a[106182] = 22;
	v->a[106183] = anon_sym_esac;
	v->a[106184] = anon_sym_PIPE;
	v->a[106185] = anon_sym_SEMI_SEMI;
	v->a[106186] = anon_sym_SEMI_AMP;
	v->a[106187] = anon_sym_SEMI_SEMI_AMP;
	v->a[106188] = anon_sym_PIPE_AMP;
	v->a[106189] = anon_sym_AMP_AMP;
	v->a[106190] = anon_sym_PIPE_PIPE;
	v->a[106191] = anon_sym_LT;
	v->a[106192] = anon_sym_GT;
	v->a[106193] = anon_sym_GT_GT;
	v->a[106194] = anon_sym_AMP_GT;
	v->a[106195] = anon_sym_AMP_GT_GT;
	v->a[106196] = anon_sym_LT_AMP;
	v->a[106197] = anon_sym_GT_AMP;
	v->a[106198] = anon_sym_GT_PIPE;
	v->a[106199] = anon_sym_LT_AMP_DASH;
	small_parse_table_5310(v);
}

/* EOF small_parse_table_1061.c */
