/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_571.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2855(t_small_parse_table_array *v)
{
	v->a[57100] = actions(698);
	v->a[57101] = 2;
	v->a[57102] = anon_sym_AMP_AMP;
	v->a[57103] = anon_sym_PIPE_PIPE;
	v->a[57104] = actions(700);
	v->a[57105] = 2;
	v->a[57106] = anon_sym_LT_LT;
	v->a[57107] = anon_sym_LT_LT_DASH;
	v->a[57108] = actions(696);
	v->a[57109] = 3;
	v->a[57110] = anon_sym_SEMI_SEMI;
	v->a[57111] = anon_sym_AMP;
	v->a[57112] = anon_sym_SEMI;
	v->a[57113] = state(1031);
	v->a[57114] = 3;
	v->a[57115] = sym_file_redirect;
	v->a[57116] = sym_heredoc_redirect;
	v->a[57117] = aux_sym_redirected_statement_repeat1;
	v->a[57118] = actions(1855);
	v->a[57119] = 7;
	small_parse_table_2856(v);
}

void	small_parse_table_2856(t_small_parse_table_array *v)
{
	v->a[57120] = anon_sym_LT;
	v->a[57121] = anon_sym_GT;
	v->a[57122] = anon_sym_GT_GT;
	v->a[57123] = anon_sym_LT_AMP;
	v->a[57124] = anon_sym_GT_AMP;
	v->a[57125] = anon_sym_GT_PIPE;
	v->a[57126] = anon_sym_LT_GT;
	v->a[57127] = 3;
	v->a[57128] = actions(3);
	v->a[57129] = 1;
	v->a[57130] = sym_comment;
	v->a[57131] = actions(835);
	v->a[57132] = 4;
	v->a[57133] = sym_file_descriptor;
	v->a[57134] = sym__concat;
	v->a[57135] = sym_variable_name;
	v->a[57136] = aux_sym_heredoc_redirect_token1;
	v->a[57137] = actions(833);
	v->a[57138] = 17;
	v->a[57139] = anon_sym_esac;
	small_parse_table_2857(v);
}

void	small_parse_table_2857(t_small_parse_table_array *v)
{
	v->a[57140] = anon_sym_PIPE;
	v->a[57141] = anon_sym_SEMI_SEMI;
	v->a[57142] = anon_sym_AMP_AMP;
	v->a[57143] = anon_sym_PIPE_PIPE;
	v->a[57144] = anon_sym_LT;
	v->a[57145] = anon_sym_GT;
	v->a[57146] = anon_sym_GT_GT;
	v->a[57147] = anon_sym_LT_AMP;
	v->a[57148] = anon_sym_GT_AMP;
	v->a[57149] = anon_sym_GT_PIPE;
	v->a[57150] = anon_sym_LT_GT;
	v->a[57151] = anon_sym_LT_LT;
	v->a[57152] = anon_sym_LT_LT_DASH;
	v->a[57153] = anon_sym_AMP;
	v->a[57154] = aux_sym_concatenation_token1;
	v->a[57155] = anon_sym_SEMI;
	v->a[57156] = 5;
	v->a[57157] = actions(3);
	v->a[57158] = 1;
	v->a[57159] = sym_comment;
	small_parse_table_2858(v);
}

void	small_parse_table_2858(t_small_parse_table_array *v)
{
	v->a[57160] = actions(1920);
	v->a[57161] = 1;
	v->a[57162] = anon_sym_PIPE;
	v->a[57163] = state(1500);
	v->a[57164] = 1;
	v->a[57165] = aux_sym_pipeline_repeat1;
	v->a[57166] = actions(1918);
	v->a[57167] = 3;
	v->a[57168] = sym_file_descriptor;
	v->a[57169] = ts_builtin_sym_end;
	v->a[57170] = aux_sym_heredoc_redirect_token1;
	v->a[57171] = actions(1923);
	v->a[57172] = 16;
	v->a[57173] = anon_sym_RPAREN;
	v->a[57174] = anon_sym_SEMI_SEMI;
	v->a[57175] = anon_sym_AMP_AMP;
	v->a[57176] = anon_sym_PIPE_PIPE;
	v->a[57177] = anon_sym_LT;
	v->a[57178] = anon_sym_GT;
	v->a[57179] = anon_sym_GT_GT;
	small_parse_table_2859(v);
}

void	small_parse_table_2859(t_small_parse_table_array *v)
{
	v->a[57180] = anon_sym_LT_AMP;
	v->a[57181] = anon_sym_GT_AMP;
	v->a[57182] = anon_sym_GT_PIPE;
	v->a[57183] = anon_sym_LT_GT;
	v->a[57184] = anon_sym_LT_LT;
	v->a[57185] = anon_sym_LT_LT_DASH;
	v->a[57186] = anon_sym_AMP;
	v->a[57187] = anon_sym_BQUOTE;
	v->a[57188] = anon_sym_SEMI;
	v->a[57189] = 4;
	v->a[57190] = actions(3);
	v->a[57191] = 1;
	v->a[57192] = sym_comment;
	v->a[57193] = actions(995);
	v->a[57194] = 2;
	v->a[57195] = sym_file_descriptor;
	v->a[57196] = aux_sym_heredoc_redirect_token1;
	v->a[57197] = state(1034);
	v->a[57198] = 3;
	v->a[57199] = sym_file_redirect;
	small_parse_table_2860(v);
}

/* EOF small_parse_table_571.c */
