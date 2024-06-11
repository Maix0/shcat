/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_801.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4005(t_small_parse_table_array *v)
{
	v->a[80100] = 1;
	v->a[80101] = anon_sym_DOLLAR_LPAREN;
	v->a[80102] = actions(1973);
	v->a[80103] = 1;
	v->a[80104] = anon_sym_BQUOTE;
	v->a[80105] = actions(1975);
	v->a[80106] = 1;
	v->a[80107] = sym_extglob_pattern;
	v->a[80108] = state(1547);
	v->a[80109] = 1;
	v->a[80110] = aux_sym_case_statement_repeat1;
	v->a[80111] = state(2080);
	v->a[80112] = 1;
	v->a[80113] = sym_case_item;
	v->a[80114] = state(2284);
	v->a[80115] = 1;
	v->a[80116] = sym__case_item_last;
	v->a[80117] = state(2224);
	v->a[80118] = 2;
	v->a[80119] = sym_concatenation;
	small_parse_table_4006(v);
}

void	small_parse_table_4006(t_small_parse_table_array *v)
{
	v->a[80120] = sym__extglob_blob;
	v->a[80121] = actions(1955);
	v->a[80122] = 3;
	v->a[80123] = sym_raw_string;
	v->a[80124] = sym_number;
	v->a[80125] = sym_word;
	v->a[80126] = state(2157);
	v->a[80127] = 5;
	v->a[80128] = sym_arithmetic_expansion;
	v->a[80129] = sym_string;
	v->a[80130] = sym_simple_expansion;
	v->a[80131] = sym_expansion;
	v->a[80132] = sym_command_substitution;
	v->a[80133] = 5;
	v->a[80134] = actions(3);
	v->a[80135] = 1;
	v->a[80136] = sym_comment;
	v->a[80137] = actions(2919);
	v->a[80138] = 1;
	v->a[80139] = anon_sym_PIPE;
	small_parse_table_4007(v);
}

void	small_parse_table_4007(t_small_parse_table_array *v)
{
	v->a[80140] = state(1520);
	v->a[80141] = 1;
	v->a[80142] = aux_sym_pipeline_repeat1;
	v->a[80143] = actions(2880);
	v->a[80144] = 2;
	v->a[80145] = sym_file_descriptor;
	v->a[80146] = aux_sym_heredoc_redirect_token1;
	v->a[80147] = actions(2878);
	v->a[80148] = 17;
	v->a[80149] = anon_sym_SEMI_SEMI;
	v->a[80150] = anon_sym_AMP_AMP;
	v->a[80151] = anon_sym_PIPE_PIPE;
	v->a[80152] = anon_sym_LT;
	v->a[80153] = anon_sym_GT;
	v->a[80154] = anon_sym_GT_GT;
	v->a[80155] = anon_sym_AMP_GT;
	v->a[80156] = anon_sym_AMP_GT_GT;
	v->a[80157] = anon_sym_LT_AMP;
	v->a[80158] = anon_sym_GT_AMP;
	v->a[80159] = anon_sym_GT_PIPE;
	small_parse_table_4008(v);
}

void	small_parse_table_4008(t_small_parse_table_array *v)
{
	v->a[80160] = anon_sym_LT_AMP_DASH;
	v->a[80161] = anon_sym_GT_AMP_DASH;
	v->a[80162] = anon_sym_LT_LT;
	v->a[80163] = anon_sym_LT_LT_DASH;
	v->a[80164] = anon_sym_AMP;
	v->a[80165] = anon_sym_SEMI;
	v->a[80166] = 3;
	v->a[80167] = actions(3);
	v->a[80168] = 1;
	v->a[80169] = sym_comment;
	v->a[80170] = actions(2657);
	v->a[80171] = 2;
	v->a[80172] = sym_file_descriptor;
	v->a[80173] = aux_sym_heredoc_redirect_token1;
	v->a[80174] = actions(2659);
	v->a[80175] = 19;
	v->a[80176] = anon_sym_esac;
	v->a[80177] = anon_sym_PIPE;
	v->a[80178] = anon_sym_SEMI_SEMI;
	v->a[80179] = anon_sym_AMP_AMP;
	small_parse_table_4009(v);
}

void	small_parse_table_4009(t_small_parse_table_array *v)
{
	v->a[80180] = anon_sym_PIPE_PIPE;
	v->a[80181] = anon_sym_LT;
	v->a[80182] = anon_sym_GT;
	v->a[80183] = anon_sym_GT_GT;
	v->a[80184] = anon_sym_AMP_GT;
	v->a[80185] = anon_sym_AMP_GT_GT;
	v->a[80186] = anon_sym_LT_AMP;
	v->a[80187] = anon_sym_GT_AMP;
	v->a[80188] = anon_sym_GT_PIPE;
	v->a[80189] = anon_sym_LT_AMP_DASH;
	v->a[80190] = anon_sym_GT_AMP_DASH;
	v->a[80191] = anon_sym_LT_LT;
	v->a[80192] = anon_sym_LT_LT_DASH;
	v->a[80193] = anon_sym_AMP;
	v->a[80194] = anon_sym_SEMI;
	v->a[80195] = 3;
	v->a[80196] = actions(3);
	v->a[80197] = 1;
	v->a[80198] = sym_comment;
	v->a[80199] = actions(2734);
	small_parse_table_4010(v);
}

/* EOF small_parse_table_801.c */
