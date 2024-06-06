/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_361.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1805(t_small_parse_table_array *v)
{
	v->a[36100] = 34;
	v->a[36101] = anon_sym_LPAREN;
	v->a[36102] = anon_sym_PIPE;
	v->a[36103] = anon_sym_RPAREN;
	v->a[36104] = anon_sym_SEMI_SEMI;
	v->a[36105] = anon_sym_PIPE_AMP;
	v->a[36106] = anon_sym_AMP_AMP;
	v->a[36107] = anon_sym_PIPE_PIPE;
	v->a[36108] = anon_sym_LT;
	v->a[36109] = anon_sym_GT;
	v->a[36110] = anon_sym_GT_GT;
	v->a[36111] = anon_sym_AMP_GT;
	v->a[36112] = anon_sym_AMP_GT_GT;
	v->a[36113] = anon_sym_LT_AMP;
	v->a[36114] = anon_sym_GT_AMP;
	v->a[36115] = anon_sym_GT_PIPE;
	v->a[36116] = anon_sym_LT_AMP_DASH;
	v->a[36117] = anon_sym_GT_AMP_DASH;
	v->a[36118] = anon_sym_LT_LT;
	v->a[36119] = anon_sym_LT_LT_DASH;
	small_parse_table_1806(v);
}

void	small_parse_table_1806(t_small_parse_table_array *v)
{
	v->a[36120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36121] = anon_sym_AMP;
	v->a[36122] = aux_sym_concatenation_token1;
	v->a[36123] = anon_sym_DOLLAR;
	v->a[36124] = sym__special_character;
	v->a[36125] = anon_sym_DQUOTE;
	v->a[36126] = sym_raw_string;
	v->a[36127] = aux_sym_number_token1;
	v->a[36128] = aux_sym_number_token2;
	v->a[36129] = anon_sym_DOLLAR_LBRACE;
	v->a[36130] = anon_sym_DOLLAR_LPAREN;
	v->a[36131] = anon_sym_BQUOTE;
	v->a[36132] = anon_sym_DOLLAR_BQUOTE;
	v->a[36133] = sym_word;
	v->a[36134] = anon_sym_SEMI;
	v->a[36135] = 3;
	v->a[36136] = actions(3);
	v->a[36137] = 1;
	v->a[36138] = sym_comment;
	v->a[36139] = actions(2778);
	small_parse_table_1807(v);
}

void	small_parse_table_1807(t_small_parse_table_array *v)
{
	v->a[36140] = 5;
	v->a[36141] = sym_file_descriptor;
	v->a[36142] = sym__concat;
	v->a[36143] = sym_test_operator;
	v->a[36144] = sym__brace_start;
	v->a[36145] = aux_sym_heredoc_redirect_token1;
	v->a[36146] = actions(2776);
	v->a[36147] = 35;
	v->a[36148] = anon_sym_esac;
	v->a[36149] = anon_sym_PIPE;
	v->a[36150] = anon_sym_SEMI_SEMI;
	v->a[36151] = anon_sym_SEMI_AMP;
	v->a[36152] = anon_sym_SEMI_SEMI_AMP;
	v->a[36153] = anon_sym_PIPE_AMP;
	v->a[36154] = anon_sym_AMP_AMP;
	v->a[36155] = anon_sym_PIPE_PIPE;
	v->a[36156] = anon_sym_LT;
	v->a[36157] = anon_sym_GT;
	v->a[36158] = anon_sym_GT_GT;
	v->a[36159] = anon_sym_AMP_GT;
	small_parse_table_1808(v);
}

void	small_parse_table_1808(t_small_parse_table_array *v)
{
	v->a[36160] = anon_sym_AMP_GT_GT;
	v->a[36161] = anon_sym_LT_AMP;
	v->a[36162] = anon_sym_GT_AMP;
	v->a[36163] = anon_sym_GT_PIPE;
	v->a[36164] = anon_sym_LT_AMP_DASH;
	v->a[36165] = anon_sym_GT_AMP_DASH;
	v->a[36166] = anon_sym_LT_LT;
	v->a[36167] = anon_sym_LT_LT_DASH;
	v->a[36168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36169] = anon_sym_AMP;
	v->a[36170] = aux_sym_concatenation_token1;
	v->a[36171] = anon_sym_DOLLAR;
	v->a[36172] = sym__special_character;
	v->a[36173] = anon_sym_DQUOTE;
	v->a[36174] = sym_raw_string;
	v->a[36175] = aux_sym_number_token1;
	v->a[36176] = aux_sym_number_token2;
	v->a[36177] = anon_sym_DOLLAR_LBRACE;
	v->a[36178] = anon_sym_DOLLAR_LPAREN;
	v->a[36179] = anon_sym_BQUOTE;
	small_parse_table_1809(v);
}

void	small_parse_table_1809(t_small_parse_table_array *v)
{
	v->a[36180] = anon_sym_DOLLAR_BQUOTE;
	v->a[36181] = sym_word;
	v->a[36182] = anon_sym_SEMI;
	v->a[36183] = 3;
	v->a[36184] = actions(3);
	v->a[36185] = 1;
	v->a[36186] = sym_comment;
	v->a[36187] = actions(2908);
	v->a[36188] = 5;
	v->a[36189] = sym_file_descriptor;
	v->a[36190] = sym__concat;
	v->a[36191] = sym_test_operator;
	v->a[36192] = sym__brace_start;
	v->a[36193] = aux_sym_heredoc_redirect_token1;
	v->a[36194] = actions(2906);
	v->a[36195] = 35;
	v->a[36196] = anon_sym_esac;
	v->a[36197] = anon_sym_PIPE;
	v->a[36198] = anon_sym_SEMI_SEMI;
	v->a[36199] = anon_sym_SEMI_AMP;
	small_parse_table_1810(v);
}

/* EOF small_parse_table_361.c */
