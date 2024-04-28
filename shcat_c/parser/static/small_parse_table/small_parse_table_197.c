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
	v->a[19700] = anon_sym_SEMI_SEMI;
	v->a[19701] = anon_sym_PIPE_AMP;
	v->a[19702] = anon_sym_AMP_GT;
	v->a[19703] = anon_sym_AMP_GT_GT;
	v->a[19704] = anon_sym_LT_AMP;
	v->a[19705] = anon_sym_GT_AMP;
	v->a[19706] = anon_sym_GT_PIPE;
	v->a[19707] = anon_sym_LT_AMP_DASH;
	v->a[19708] = anon_sym_GT_AMP_DASH;
	v->a[19709] = anon_sym_LT_LT_DASH;
	v->a[19710] = aux_sym_heredoc_redirect_token1;
	v->a[19711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19712] = anon_sym_DOLLAR_LBRACK;
	v->a[19713] = sym__special_character;
	v->a[19714] = sym_raw_string;
	v->a[19715] = sym_ansi_c_string;
	v->a[19716] = aux_sym_number_token1;
	v->a[19717] = aux_sym_number_token2;
	v->a[19718] = anon_sym_DOLLAR_LBRACE;
	v->a[19719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = anon_sym_BQUOTE;
	v->a[19721] = anon_sym_DOLLAR_BQUOTE;
	v->a[19722] = anon_sym_LT_LPAREN;
	v->a[19723] = anon_sym_GT_LPAREN;
	v->a[19724] = sym_word;
	v->a[19725] = 30;
	v->a[19726] = actions(3);
	v->a[19727] = 1;
	v->a[19728] = sym_comment;
	v->a[19729] = actions(3727);
	v->a[19730] = 1;
	v->a[19731] = anon_sym_LT_LT_LT;
	v->a[19732] = actions(3729);
	v->a[19733] = 1;
	v->a[19734] = anon_sym_DOLLAR_LBRACK;
	v->a[19735] = actions(3731);
	v->a[19736] = 1;
	v->a[19737] = anon_sym_DOLLAR;
	v->a[19738] = actions(3733);
	v->a[19739] = 1;
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = sym__special_character;
	v->a[19741] = actions(3735);
	v->a[19742] = 1;
	v->a[19743] = anon_sym_DQUOTE;
	v->a[19744] = actions(3737);
	v->a[19745] = 1;
	v->a[19746] = aux_sym_number_token1;
	v->a[19747] = actions(3739);
	v->a[19748] = 1;
	v->a[19749] = aux_sym_number_token2;
	v->a[19750] = actions(3741);
	v->a[19751] = 1;
	v->a[19752] = anon_sym_DOLLAR_LBRACE;
	v->a[19753] = actions(3743);
	v->a[19754] = 1;
	v->a[19755] = anon_sym_DOLLAR_LPAREN;
	v->a[19756] = actions(3745);
	v->a[19757] = 1;
	v->a[19758] = anon_sym_BQUOTE;
	v->a[19759] = actions(3747);
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = 1;
	v->a[19761] = anon_sym_DOLLAR_BQUOTE;
	v->a[19762] = actions(3751);
	v->a[19763] = 1;
	v->a[19764] = sym_file_descriptor;
	v->a[19765] = actions(3753);
	v->a[19766] = 1;
	v->a[19767] = sym_test_operator;
	v->a[19768] = actions(3755);
	v->a[19769] = 1;
	v->a[19770] = sym__brace_start;
	v->a[19771] = actions(3813);
	v->a[19772] = 1;
	v->a[19773] = aux_sym_heredoc_redirect_token1;
	v->a[19774] = state(3603);
	v->a[19775] = 1;
	v->a[19776] = aux_sym__heredoc_command;
	v->a[19777] = state(5351);
	v->a[19778] = 1;
	v->a[19779] = aux_sym__literal_repeat1;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = state(5456);
	v->a[19781] = 1;
	v->a[19782] = sym_concatenation;
	v->a[19783] = state(6792);
	v->a[19784] = 1;
	v->a[19785] = sym__heredoc_expression;
	v->a[19786] = state(6806);
	v->a[19787] = 1;
	v->a[19788] = sym__heredoc_pipeline;
	v->a[19789] = actions(3715);
	v->a[19790] = 2;
	v->a[19791] = anon_sym_LPAREN_LPAREN;
	v->a[19792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19793] = actions(3717);
	v->a[19794] = 2;
	v->a[19795] = anon_sym_PIPE_PIPE;
	v->a[19796] = anon_sym_AMP_AMP;
	v->a[19797] = actions(3719);
	v->a[19798] = 2;
	v->a[19799] = anon_sym_PIPE;
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
