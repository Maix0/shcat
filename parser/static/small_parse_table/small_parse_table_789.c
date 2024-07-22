/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_789.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3945(t_small_parse_table_array *v)
{
	v->a[78900] = 1;
	v->a[78901] = sym_comment;
	v->a[78902] = actions(682);
	v->a[78903] = 1;
	v->a[78904] = sym__concat;
	v->a[78905] = actions(680);
	v->a[78906] = 7;
	v->a[78907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78908] = anon_sym_DOLLAR;
	v->a[78909] = anon_sym_DQUOTE;
	v->a[78910] = sym_string_content;
	v->a[78911] = anon_sym_DOLLAR_LBRACE;
	v->a[78912] = anon_sym_DOLLAR_LPAREN;
	v->a[78913] = anon_sym_BQUOTE;
	v->a[78914] = 3;
	v->a[78915] = actions(3);
	v->a[78916] = 1;
	v->a[78917] = sym_comment;
	v->a[78918] = actions(1229);
	v->a[78919] = 1;
	small_parse_table_3946(v);
}

void	small_parse_table_3946(t_small_parse_table_array *v)
{
	v->a[78920] = sym__concat;
	v->a[78921] = actions(1227);
	v->a[78922] = 7;
	v->a[78923] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78924] = anon_sym_DOLLAR;
	v->a[78925] = anon_sym_DQUOTE;
	v->a[78926] = sym_string_content;
	v->a[78927] = anon_sym_DOLLAR_LBRACE;
	v->a[78928] = anon_sym_DOLLAR_LPAREN;
	v->a[78929] = anon_sym_BQUOTE;
	v->a[78930] = 8;
	v->a[78931] = actions(3);
	v->a[78932] = 1;
	v->a[78933] = sym_comment;
	v->a[78934] = actions(3511);
	v->a[78935] = 1;
	v->a[78936] = anon_sym_in;
	v->a[78937] = actions(3513);
	v->a[78938] = 1;
	v->a[78939] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3947(v);
}

void	small_parse_table_3947(t_small_parse_table_array *v)
{
	v->a[78940] = actions(3515);
	v->a[78941] = 1;
	v->a[78942] = aux_sym_concatenation_token1;
	v->a[78943] = actions(3517);
	v->a[78944] = 1;
	v->a[78945] = sym__concat;
	v->a[78946] = state(1755);
	v->a[78947] = 1;
	v->a[78948] = aux_sym_concatenation_repeat1;
	v->a[78949] = state(1941);
	v->a[78950] = 1;
	v->a[78951] = sym_terminator;
	v->a[78952] = actions(1975);
	v->a[78953] = 2;
	v->a[78954] = anon_sym_SEMI_SEMI;
	v->a[78955] = anon_sym_SEMI;
	v->a[78956] = 8;
	v->a[78957] = actions(3);
	v->a[78958] = 1;
	v->a[78959] = sym_comment;
	small_parse_table_3948(v);
}

void	small_parse_table_3948(t_small_parse_table_array *v)
{
	v->a[78960] = actions(1857);
	v->a[78961] = 1;
	v->a[78962] = anon_sym_RPAREN;
	v->a[78963] = actions(1862);
	v->a[78964] = 1;
	v->a[78965] = anon_sym_DQUOTE;
	v->a[78966] = actions(1866);
	v->a[78967] = 1;
	v->a[78968] = aux_sym__expansion_regex_token1;
	v->a[78969] = actions(3519);
	v->a[78970] = 1;
	v->a[78971] = anon_sym_RBRACE;
	v->a[78972] = actions(3521);
	v->a[78973] = 1;
	v->a[78974] = sym_raw_string;
	v->a[78975] = actions(3523);
	v->a[78976] = 1;
	v->a[78977] = sym_regex;
	v->a[78978] = state(1740);
	v->a[78979] = 2;
	small_parse_table_3949(v);
}

void	small_parse_table_3949(t_small_parse_table_array *v)
{
	v->a[78980] = sym_string;
	v->a[78981] = aux_sym__expansion_regex_repeat1;
	v->a[78982] = 8;
	v->a[78983] = actions(3);
	v->a[78984] = 1;
	v->a[78985] = sym_comment;
	v->a[78986] = actions(1857);
	v->a[78987] = 1;
	v->a[78988] = anon_sym_RPAREN;
	v->a[78989] = actions(1862);
	v->a[78990] = 1;
	v->a[78991] = anon_sym_DQUOTE;
	v->a[78992] = actions(1864);
	v->a[78993] = 1;
	v->a[78994] = sym_raw_string;
	v->a[78995] = actions(1866);
	v->a[78996] = 1;
	v->a[78997] = aux_sym__expansion_regex_token1;
	v->a[78998] = actions(1868);
	v->a[78999] = 1;
	small_parse_table_3950(v);
}

/* EOF small_parse_table_789.c */
