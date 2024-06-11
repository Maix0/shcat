/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_811.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4055(t_small_parse_table_array *v)
{
	v->a[81100] = sym_comment;
	v->a[81101] = actions(608);
	v->a[81102] = 2;
	v->a[81103] = sym_file_descriptor;
	v->a[81104] = sym_variable_name;
	v->a[81105] = actions(610);
	v->a[81106] = 19;
	v->a[81107] = anon_sym_LT;
	v->a[81108] = anon_sym_GT;
	v->a[81109] = anon_sym_GT_GT;
	v->a[81110] = anon_sym_AMP_GT;
	v->a[81111] = anon_sym_AMP_GT_GT;
	v->a[81112] = anon_sym_LT_AMP;
	v->a[81113] = anon_sym_GT_AMP;
	v->a[81114] = anon_sym_GT_PIPE;
	v->a[81115] = anon_sym_LT_AMP_DASH;
	v->a[81116] = anon_sym_GT_AMP_DASH;
	v->a[81117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81118] = anon_sym_DOLLAR;
	v->a[81119] = anon_sym_DQUOTE;
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = sym_raw_string;
	v->a[81121] = sym_number;
	v->a[81122] = anon_sym_DOLLAR_LBRACE;
	v->a[81123] = anon_sym_DOLLAR_LPAREN;
	v->a[81124] = anon_sym_BQUOTE;
	v->a[81125] = sym_word;
	v->a[81126] = 3;
	v->a[81127] = actions(3);
	v->a[81128] = 1;
	v->a[81129] = sym_comment;
	v->a[81130] = actions(2765);
	v->a[81131] = 2;
	v->a[81132] = sym_file_descriptor;
	v->a[81133] = aux_sym_heredoc_redirect_token1;
	v->a[81134] = actions(2767);
	v->a[81135] = 19;
	v->a[81136] = anon_sym_esac;
	v->a[81137] = anon_sym_PIPE;
	v->a[81138] = anon_sym_SEMI_SEMI;
	v->a[81139] = anon_sym_AMP_AMP;
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = anon_sym_PIPE_PIPE;
	v->a[81141] = anon_sym_LT;
	v->a[81142] = anon_sym_GT;
	v->a[81143] = anon_sym_GT_GT;
	v->a[81144] = anon_sym_AMP_GT;
	v->a[81145] = anon_sym_AMP_GT_GT;
	v->a[81146] = anon_sym_LT_AMP;
	v->a[81147] = anon_sym_GT_AMP;
	v->a[81148] = anon_sym_GT_PIPE;
	v->a[81149] = anon_sym_LT_AMP_DASH;
	v->a[81150] = anon_sym_GT_AMP_DASH;
	v->a[81151] = anon_sym_LT_LT;
	v->a[81152] = anon_sym_LT_LT_DASH;
	v->a[81153] = anon_sym_AMP;
	v->a[81154] = anon_sym_SEMI;
	v->a[81155] = 3;
	v->a[81156] = actions(3);
	v->a[81157] = 1;
	v->a[81158] = sym_comment;
	v->a[81159] = actions(2765);
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = 2;
	v->a[81161] = sym_file_descriptor;
	v->a[81162] = aux_sym_heredoc_redirect_token1;
	v->a[81163] = actions(2767);
	v->a[81164] = 19;
	v->a[81165] = anon_sym_esac;
	v->a[81166] = anon_sym_PIPE;
	v->a[81167] = anon_sym_SEMI_SEMI;
	v->a[81168] = anon_sym_AMP_AMP;
	v->a[81169] = anon_sym_PIPE_PIPE;
	v->a[81170] = anon_sym_LT;
	v->a[81171] = anon_sym_GT;
	v->a[81172] = anon_sym_GT_GT;
	v->a[81173] = anon_sym_AMP_GT;
	v->a[81174] = anon_sym_AMP_GT_GT;
	v->a[81175] = anon_sym_LT_AMP;
	v->a[81176] = anon_sym_GT_AMP;
	v->a[81177] = anon_sym_GT_PIPE;
	v->a[81178] = anon_sym_LT_AMP_DASH;
	v->a[81179] = anon_sym_GT_AMP_DASH;
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = anon_sym_LT_LT;
	v->a[81181] = anon_sym_LT_LT_DASH;
	v->a[81182] = anon_sym_AMP;
	v->a[81183] = anon_sym_SEMI;
	v->a[81184] = 3;
	v->a[81185] = actions(3);
	v->a[81186] = 1;
	v->a[81187] = sym_comment;
	v->a[81188] = actions(2616);
	v->a[81189] = 2;
	v->a[81190] = sym_file_descriptor;
	v->a[81191] = aux_sym_heredoc_redirect_token1;
	v->a[81192] = actions(2618);
	v->a[81193] = 19;
	v->a[81194] = anon_sym_esac;
	v->a[81195] = anon_sym_PIPE;
	v->a[81196] = anon_sym_SEMI_SEMI;
	v->a[81197] = anon_sym_AMP_AMP;
	v->a[81198] = anon_sym_PIPE_PIPE;
	v->a[81199] = anon_sym_LT;
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
