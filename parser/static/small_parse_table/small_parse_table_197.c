/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_197.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_985(t_small_parse_table_array *v)
{
	v->a[19700] = actions(395);
	v->a[19701] = 9;
	v->a[19702] = anon_sym_BANG;
	v->a[19703] = anon_sym_DASH;
	v->a[19704] = anon_sym_STAR;
	v->a[19705] = anon_sym_QMARK;
	v->a[19706] = anon_sym_DOLLAR;
	v->a[19707] = anon_sym_POUND;
	v->a[19708] = anon_sym_AT;
	v->a[19709] = anon_sym_0;
	v->a[19710] = anon_sym__;
	v->a[19711] = actions(381);
	v->a[19712] = 27;
	v->a[19713] = anon_sym_esac;
	v->a[19714] = anon_sym_LPAREN;
	v->a[19715] = anon_sym_PIPE;
	v->a[19716] = anon_sym_SEMI_SEMI;
	v->a[19717] = anon_sym_AMP_AMP;
	v->a[19718] = anon_sym_PIPE_PIPE;
	v->a[19719] = anon_sym_LT;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = anon_sym_GT;
	v->a[19721] = anon_sym_GT_GT;
	v->a[19722] = anon_sym_LT_AMP;
	v->a[19723] = anon_sym_GT_AMP;
	v->a[19724] = anon_sym_GT_PIPE;
	v->a[19725] = anon_sym_LT_AMP_DASH;
	v->a[19726] = anon_sym_GT_AMP_DASH;
	v->a[19727] = anon_sym_LT_LT;
	v->a[19728] = anon_sym_LT_LT_DASH;
	v->a[19729] = aux_sym_heredoc_redirect_token1;
	v->a[19730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19731] = anon_sym_AMP;
	v->a[19732] = anon_sym_DQUOTE;
	v->a[19733] = sym_raw_string;
	v->a[19734] = sym_number;
	v->a[19735] = anon_sym_DOLLAR_LBRACE;
	v->a[19736] = anon_sym_DOLLAR_LPAREN;
	v->a[19737] = anon_sym_BQUOTE;
	v->a[19738] = sym_word;
	v->a[19739] = anon_sym_SEMI;
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = 6;
	v->a[19741] = actions(3);
	v->a[19742] = 1;
	v->a[19743] = sym_comment;
	v->a[19744] = actions(405);
	v->a[19745] = 1;
	v->a[19746] = sym_variable_name;
	v->a[19747] = actions(403);
	v->a[19748] = 2;
	v->a[19749] = aux_sym__simple_variable_name_token1;
	v->a[19750] = aux_sym__multiline_variable_name_token1;
	v->a[19751] = actions(379);
	v->a[19752] = 3;
	v->a[19753] = sym_file_descriptor;
	v->a[19754] = sym__bare_dollar;
	v->a[19755] = ts_builtin_sym_end;
	v->a[19756] = actions(401);
	v->a[19757] = 9;
	v->a[19758] = anon_sym_BANG;
	v->a[19759] = anon_sym_DASH;
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = anon_sym_STAR;
	v->a[19761] = anon_sym_QMARK;
	v->a[19762] = anon_sym_DOLLAR;
	v->a[19763] = anon_sym_POUND;
	v->a[19764] = anon_sym_AT;
	v->a[19765] = anon_sym_0;
	v->a[19766] = anon_sym__;
	v->a[19767] = actions(381);
	v->a[19768] = 25;
	v->a[19769] = anon_sym_PIPE;
	v->a[19770] = anon_sym_SEMI_SEMI;
	v->a[19771] = anon_sym_AMP_AMP;
	v->a[19772] = anon_sym_PIPE_PIPE;
	v->a[19773] = anon_sym_LT;
	v->a[19774] = anon_sym_GT;
	v->a[19775] = anon_sym_GT_GT;
	v->a[19776] = anon_sym_LT_AMP;
	v->a[19777] = anon_sym_GT_AMP;
	v->a[19778] = anon_sym_GT_PIPE;
	v->a[19779] = anon_sym_LT_AMP_DASH;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = anon_sym_GT_AMP_DASH;
	v->a[19781] = anon_sym_LT_LT;
	v->a[19782] = anon_sym_LT_LT_DASH;
	v->a[19783] = aux_sym_heredoc_redirect_token1;
	v->a[19784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19785] = anon_sym_AMP;
	v->a[19786] = anon_sym_DQUOTE;
	v->a[19787] = sym_raw_string;
	v->a[19788] = sym_number;
	v->a[19789] = anon_sym_DOLLAR_LBRACE;
	v->a[19790] = anon_sym_DOLLAR_LPAREN;
	v->a[19791] = anon_sym_BQUOTE;
	v->a[19792] = sym_word;
	v->a[19793] = anon_sym_SEMI;
	v->a[19794] = 6;
	v->a[19795] = actions(3);
	v->a[19796] = 1;
	v->a[19797] = sym_comment;
	v->a[19798] = actions(411);
	v->a[19799] = 1;
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
