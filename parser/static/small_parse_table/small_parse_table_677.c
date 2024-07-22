/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_677.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3385(t_small_parse_table_array *v)
{
	v->a[67700] = 3;
	v->a[67701] = sym_raw_string;
	v->a[67702] = sym_number;
	v->a[67703] = sym_word;
	v->a[67704] = state(1516);
	v->a[67705] = 5;
	v->a[67706] = sym_arithmetic_expansion;
	v->a[67707] = sym_string;
	v->a[67708] = sym_simple_expansion;
	v->a[67709] = sym_expansion;
	v->a[67710] = sym_command_substitution;
	v->a[67711] = 3;
	v->a[67712] = actions(3);
	v->a[67713] = 1;
	v->a[67714] = sym_comment;
	v->a[67715] = actions(2269);
	v->a[67716] = 2;
	v->a[67717] = sym_file_descriptor;
	v->a[67718] = aux_sym_heredoc_redirect_token1;
	v->a[67719] = actions(2271);
	small_parse_table_3386(v);
}

void	small_parse_table_3386(t_small_parse_table_array *v)
{
	v->a[67720] = 15;
	v->a[67721] = anon_sym_esac;
	v->a[67722] = anon_sym_PIPE;
	v->a[67723] = anon_sym_SEMI_SEMI;
	v->a[67724] = anon_sym_AMP_AMP;
	v->a[67725] = anon_sym_PIPE_PIPE;
	v->a[67726] = anon_sym_LT;
	v->a[67727] = anon_sym_GT;
	v->a[67728] = anon_sym_GT_GT;
	v->a[67729] = anon_sym_LT_AMP;
	v->a[67730] = anon_sym_GT_AMP;
	v->a[67731] = anon_sym_GT_PIPE;
	v->a[67732] = anon_sym_LT_GT;
	v->a[67733] = anon_sym_LT_LT;
	v->a[67734] = anon_sym_LT_LT_DASH;
	v->a[67735] = anon_sym_SEMI;
	v->a[67736] = 3;
	v->a[67737] = actions(3);
	v->a[67738] = 1;
	v->a[67739] = sym_comment;
	small_parse_table_3387(v);
}

void	small_parse_table_3387(t_small_parse_table_array *v)
{
	v->a[67740] = actions(2145);
	v->a[67741] = 2;
	v->a[67742] = sym_file_descriptor;
	v->a[67743] = aux_sym_heredoc_redirect_token1;
	v->a[67744] = actions(2147);
	v->a[67745] = 15;
	v->a[67746] = anon_sym_esac;
	v->a[67747] = anon_sym_PIPE;
	v->a[67748] = anon_sym_SEMI_SEMI;
	v->a[67749] = anon_sym_AMP_AMP;
	v->a[67750] = anon_sym_PIPE_PIPE;
	v->a[67751] = anon_sym_LT;
	v->a[67752] = anon_sym_GT;
	v->a[67753] = anon_sym_GT_GT;
	v->a[67754] = anon_sym_LT_AMP;
	v->a[67755] = anon_sym_GT_AMP;
	v->a[67756] = anon_sym_GT_PIPE;
	v->a[67757] = anon_sym_LT_GT;
	v->a[67758] = anon_sym_LT_LT;
	v->a[67759] = anon_sym_LT_LT_DASH;
	small_parse_table_3388(v);
}

void	small_parse_table_3388(t_small_parse_table_array *v)
{
	v->a[67760] = anon_sym_SEMI;
	v->a[67761] = 3;
	v->a[67762] = actions(3);
	v->a[67763] = 1;
	v->a[67764] = sym_comment;
	v->a[67765] = actions(2269);
	v->a[67766] = 2;
	v->a[67767] = sym_file_descriptor;
	v->a[67768] = aux_sym_heredoc_redirect_token1;
	v->a[67769] = actions(2271);
	v->a[67770] = 15;
	v->a[67771] = anon_sym_esac;
	v->a[67772] = anon_sym_PIPE;
	v->a[67773] = anon_sym_SEMI_SEMI;
	v->a[67774] = anon_sym_AMP_AMP;
	v->a[67775] = anon_sym_PIPE_PIPE;
	v->a[67776] = anon_sym_LT;
	v->a[67777] = anon_sym_GT;
	v->a[67778] = anon_sym_GT_GT;
	v->a[67779] = anon_sym_LT_AMP;
	small_parse_table_3389(v);
}

void	small_parse_table_3389(t_small_parse_table_array *v)
{
	v->a[67780] = anon_sym_GT_AMP;
	v->a[67781] = anon_sym_GT_PIPE;
	v->a[67782] = anon_sym_LT_GT;
	v->a[67783] = anon_sym_LT_LT;
	v->a[67784] = anon_sym_LT_LT_DASH;
	v->a[67785] = anon_sym_SEMI;
	v->a[67786] = 12;
	v->a[67787] = actions(3);
	v->a[67788] = 1;
	v->a[67789] = sym_comment;
	v->a[67790] = actions(1012);
	v->a[67791] = 1;
	v->a[67792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67793] = actions(1014);
	v->a[67794] = 1;
	v->a[67795] = anon_sym_DOLLAR;
	v->a[67796] = actions(1016);
	v->a[67797] = 1;
	v->a[67798] = anon_sym_DQUOTE;
	v->a[67799] = actions(1018);
	small_parse_table_3390(v);
}

/* EOF small_parse_table_677.c */
