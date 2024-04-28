/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1561.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7805(t_small_parse_table_array *v)
{
	v->a[156100] = anon_sym_CARET;
	v->a[156101] = actions(7260);
	v->a[156102] = 1;
	v->a[156103] = anon_sym_AMP;
	v->a[156104] = actions(7272);
	v->a[156105] = 1;
	v->a[156106] = anon_sym_STAR_STAR;
	v->a[156107] = actions(7274);
	v->a[156108] = 1;
	v->a[156109] = aux_sym_heredoc_redirect_token1;
	v->a[156110] = actions(7250);
	v->a[156111] = 2;
	v->a[156112] = anon_sym_PLUS_PLUS;
	v->a[156113] = anon_sym_DASH_DASH;
	v->a[156114] = actions(7262);
	v->a[156115] = 2;
	v->a[156116] = anon_sym_EQ_EQ;
	v->a[156117] = anon_sym_BANG_EQ;
	v->a[156118] = actions(7266);
	v->a[156119] = 2;
	small_parse_table_7806(v);
}

void	small_parse_table_7806(t_small_parse_table_array *v)
{
	v->a[156120] = anon_sym_LT_LT;
	v->a[156121] = anon_sym_GT_GT;
	v->a[156122] = actions(7268);
	v->a[156123] = 2;
	v->a[156124] = anon_sym_PLUS;
	v->a[156125] = anon_sym_DASH;
	v->a[156126] = actions(7270);
	v->a[156127] = 3;
	v->a[156128] = anon_sym_STAR;
	v->a[156129] = anon_sym_SLASH;
	v->a[156130] = anon_sym_PERCENT;
	v->a[156131] = actions(7264);
	v->a[156132] = 4;
	v->a[156133] = anon_sym_LT;
	v->a[156134] = anon_sym_GT;
	v->a[156135] = anon_sym_LT_EQ;
	v->a[156136] = anon_sym_GT_EQ;
	v->a[156137] = actions(7248);
	v->a[156138] = 18;
	v->a[156139] = anon_sym_SEMI;
	small_parse_table_7807(v);
}

void	small_parse_table_7807(t_small_parse_table_array *v)
{
	v->a[156140] = anon_sym_COMMA;
	v->a[156141] = anon_sym_PLUS_EQ;
	v->a[156142] = anon_sym_DASH_EQ;
	v->a[156143] = anon_sym_STAR_EQ;
	v->a[156144] = anon_sym_SLASH_EQ;
	v->a[156145] = anon_sym_PERCENT_EQ;
	v->a[156146] = anon_sym_STAR_STAR_EQ;
	v->a[156147] = anon_sym_LT_LT_EQ;
	v->a[156148] = anon_sym_GT_GT_EQ;
	v->a[156149] = anon_sym_AMP_EQ;
	v->a[156150] = anon_sym_CARET_EQ;
	v->a[156151] = anon_sym_PIPE_EQ;
	v->a[156152] = anon_sym_PIPE_PIPE;
	v->a[156153] = anon_sym_DASHo;
	v->a[156154] = anon_sym_AMP_AMP;
	v->a[156155] = anon_sym_DASHa;
	v->a[156156] = anon_sym_PIPE;
	v->a[156157] = 3;
	v->a[156158] = actions(71);
	v->a[156159] = 1;
	small_parse_table_7808(v);
}

void	small_parse_table_7808(t_small_parse_table_array *v)
{
	v->a[156160] = sym_comment;
	v->a[156161] = actions(6807);
	v->a[156162] = 14;
	v->a[156163] = anon_sym_EQ;
	v->a[156164] = anon_sym_PIPE;
	v->a[156165] = anon_sym_CARET;
	v->a[156166] = anon_sym_AMP;
	v->a[156167] = anon_sym_LT;
	v->a[156168] = anon_sym_GT;
	v->a[156169] = anon_sym_LT_LT;
	v->a[156170] = anon_sym_GT_GT;
	v->a[156171] = anon_sym_PLUS;
	v->a[156172] = anon_sym_DASH;
	v->a[156173] = anon_sym_STAR;
	v->a[156174] = anon_sym_SLASH;
	v->a[156175] = anon_sym_PERCENT;
	v->a[156176] = anon_sym_STAR_STAR;
	v->a[156177] = actions(6805);
	v->a[156178] = 23;
	v->a[156179] = sym_test_operator;
	small_parse_table_7809(v);
}

void	small_parse_table_7809(t_small_parse_table_array *v)
{
	v->a[156180] = anon_sym_PLUS_PLUS;
	v->a[156181] = anon_sym_DASH_DASH;
	v->a[156182] = anon_sym_PLUS_EQ;
	v->a[156183] = anon_sym_DASH_EQ;
	v->a[156184] = anon_sym_STAR_EQ;
	v->a[156185] = anon_sym_SLASH_EQ;
	v->a[156186] = anon_sym_PERCENT_EQ;
	v->a[156187] = anon_sym_STAR_STAR_EQ;
	v->a[156188] = anon_sym_LT_LT_EQ;
	v->a[156189] = anon_sym_GT_GT_EQ;
	v->a[156190] = anon_sym_AMP_EQ;
	v->a[156191] = anon_sym_CARET_EQ;
	v->a[156192] = anon_sym_PIPE_EQ;
	v->a[156193] = anon_sym_PIPE_PIPE;
	v->a[156194] = anon_sym_AMP_AMP;
	v->a[156195] = anon_sym_EQ_EQ;
	v->a[156196] = anon_sym_BANG_EQ;
	v->a[156197] = anon_sym_LT_EQ;
	v->a[156198] = anon_sym_GT_EQ;
	v->a[156199] = anon_sym_RBRACK;
	small_parse_table_7810(v);
}

/* EOF small_parse_table_1561.c */
